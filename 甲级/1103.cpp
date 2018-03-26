#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int Num = 0;
vector<int> temp;
vector<int> sum;
vector<int> separate;
int visit[501] = { 0 };
int Max;
void dfs(int beg, int now, int end, int P, int count) {
	if (now == end&&count == Num) {
		int maxtemp = 0;
		for (int i = temp.size() - 1; i >= 0; i--) {
			maxtemp += temp[i];
			if (maxtemp >= Max) {
				sum = temp;
				Max = maxtemp;
			}
		}
		return ;
	}
	if (now > end || count > Num)
		return;
	else {
		for (int i = beg; i <= sqrt(end); i++) {
			double mid =pow(double(i),double(P));
			if (mid > end) {//此判断节省不少时间
				return;
			}
			else {
				now += mid;
				temp.push_back(i);
				dfs(i, now, end, P, count + 1);
				temp.pop_back();
				now -= mid;
			}
		}
	}
}

int main() {
	double N, K, P;
	cin >> N >> K >> P;
	Num = K;
	dfs(1, 0, N, P, 0);
	
	if (sum.size() == 0) {
		cout << "Impossible" << endl;
	}
	else {
		cout << N << " = ";
		for (int i = sum.size()-1; i >= 0; i--) {
			cout << sum[i]<< "^"<<P;
			if (i != 0) {
				cout << " + ";
			}
		}
	}
	return 0;
}