#include<iostream>
#include<cstdlib>
#include<memory.h>
#include<stack>
#include<vector>
using std::iostream;
using std::cin;
using std::cout;
using std::endl;
int min = 9999999;
int mark[501] = { 0 };
int peoplenum = 0;
int roadnum = 0;
int maxpeople = 0;
int last=0;
void dfs(int **distance, int now, int end, int dis,int *resecue) {

	if (now == end) {
		if (min > dis) {
			roadnum=1;
			min = dis;
			maxpeople=peoplenum;
		}
		else if(min==dis){
			roadnum++;
			if(maxpeople<peoplenum)
				maxpeople = peoplenum;			
		}

		return;
	}
	
	else {
		for (int i = 0; i <=end; i++) {//控制从中间哪个城市再次出发
			if (distance[now][i] != 0 && mark[i] == 0) {
				mark[i] = 1;
				peoplenum += resecue[i];
				dfs(distance,i,end, dis + distance[now][i],resecue);
				mark[i] = 0;
				peoplenum -= resecue[i];
			}
		}
		return;
	}
	
}
int main() {
	int citynum = 0;
	int roadnum = 0;
	int begin = 0;
	int end = 0;
	cin >> citynum >> roadnum >> begin >> end;
	int *rescue = new int[citynum];
	for (int i = 0; i<citynum; i++) {
		cin >> rescue[i];
	}
	int **distance = new int *[citynum];
	for (int j = 0; j<citynum; j++) {
		distance[j] = new int[citynum]();
	}
	int a = 0, b = 0, tempdis = 0;
	for (int t = 0; t<roadnum; t++) {
		cin >> a >> b >> tempdis;
		distance[a][b] = tempdis;
	}
	mark[begin] = 1;
	peoplenum += rescue[begin];
	dfs(distance, begin, end, 0,rescue);
	cout << roadnum<<" "<<maxpeople<<endl;
	return 0;
}

