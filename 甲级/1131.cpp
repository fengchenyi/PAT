#include<iostream>
using namespace std;
int End = 0;
int Count = 99999;
int visit[10005];
typedef struct Graph {
	int station;
	struct Graph* next;
}Graph;
void dfs(int now,int Rcount,Graph *road) {
	if (now == End&&Rcount<Count) {
		return;
	}
	if()
}
int main() {
	int linenum;
	cin >> linenum;
	Graph *road = new Graph[linenum+1];
	for (int i = 1; i <= linenum; i++) {
		road[i].station = i;
		road[i].next = NULL;
		int EachStationLineNum;
		cin >> EachStationLineNum;
		for (int j = 0; j < EachStationLineNum; j++) {
			int StationNum;
			cin >> StationNum;
			Graph *temp = new Graph;
			temp->station = StationNum;
			temp ->next= road[i].next;
			road[i].next = temp;
		}
	}
	int aimnum = 0;
	cin >> aimnum;
	for (int times = 0; times < aimnum; times++) {
		int beg = 0, end = 0;
		cin >> beg >> end;
		End = end;
		dfs(beg,0,road);
	}

	return 0;
}