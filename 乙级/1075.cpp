#include<iostream>
#include<vector>
using namespace std;
int Pre[100000] = { 0 };
struct node{
	int data, next;
}Data[100000];
vector<int> v[3];
int main() {
	int beg, num, K;
	cin >> beg >> num >> K;
	int temphead = 0;
	int tempdata = 0;
	int tempend=0;
	for (int j = 0; j < num; j++) {
		cin >> temphead>>tempdata>>tempend;
		Data[temphead].data = tempdata;
		Data[temphead].next = tempend;
	}
	for (int i = beg; i !=-1;) {
		if (Data[i].data < 0)
			v[0].push_back(i);
		else if (Data[i].data >= 0 && Data[i].data <= K)
			v[1].push_back(i);
		else if(Data[i].data>K)
			v[2].push_back(i);
		i = Data[i].next;
	}
	int flag = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < v[i].size(); j++) {
			if (flag == 0) {
				printf("%05d %d", v[i][j], Data[v[i][j]].data);
					flag = 1;
			}
			else {
				printf(" %05d\n%05d %d", v[i][j],v[i][j], Data[v[i][j]].data);
			}
		}
	}
	printf(" -1\n");
	cout<<Pre[-1];
	system("pause");
	return 0;
}