#include<iostream>
#include<vector>
using namespace std;
vector<int> result;
vector<int> all;
int mindis =  999999;
int mincost = 999999;
int visit[501] = { 0 };
int End = 0;
int cityNum;
void dfs(int now,int nowdis,int nowcost,int **road,int **cost){
	if (mindis < nowdis) {
		return;
	}
	if (now == End) {
		if (nowdis < mindis) {
			mindis = nowdis;
			mincost = nowcost;
			all = result;
		}
		else if (nowdis == mindis) {
			if (nowcost < mincost){
				mincost = nowcost;
				all = result;
			}
		}
		else
			return;
	}
	else {
		for (int i = 0; i < cityNum; i++) {
			if (road[now][i] != 0 && visit[i] == 0) {
				nowdis += road[now][i];
				nowcost += cost[now][i];
				visit[i] = 1;
				result.push_back(i);
				dfs(i, nowdis, nowcost, road, cost);
				result.pop_back();
				visit[i] = 0;
				nowdis -= road[now][i];
				nowcost -= cost[now][i];
			}
		}
	}
}
int main() {
	int N, M, S, D;
	cin >> N >> M >> S >> D;
	End = D;
	cityNum = N;
	int **road = new int*[N];
	int **cost = new int*[N];
	for (int i = 0; i < N; i++) {
		road[i] = new int[N]();
		cost[i] = new int[N]();
	}
	int a, b, Dis, Cos;
	for (int i = 0; i < M; i++) {
		cin >> a >> b >> Dis>>Cos;
		road[a][b] = Dis;
		road[b][a] = Dis;
		cost[a][b] = Cos;
		cost[b][a] = Cos;
	}
	dfs(S, 0, 0, road, cost);
	cout << S<<" ";
	for (int i = 0; i < all.size(); i++) {
			cout << all[i] << " ";
	}
	cout <<mindis<<" "<<mincost<<endl;
	system("pause");
	return 0;
}