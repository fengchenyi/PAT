#include<iostream>
#include<cstdio>
#include<algorithm>
#include<functional>
using namespace std;
int main() {
	int num = 0;
	cin >> num;
	int *all = new int[num+1];
	for (int i = 1; i <= num; i++) {
		cin >> all[i];
	}
	sort(all+1, all + num+1,greater<int>());
	int j = 1;
	for (; j <= num; j++) {
		if (all[j] <= j)
			break;
	}
	cout << j -1<< endl;
	system("pause");
	return 0;
}