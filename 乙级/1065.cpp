#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
#include<cstdlib>
#include<algorithm>
#include<functional>
using namespace std;
int main() {
	int hash[100002] = { 0 };
	int pairCount;
	cin >> pairCount;
	int temp1 = 0, temp2 = 0;
	while (pairCount--) {
		scanf("%d %d", &temp1, &temp2);
		hash[temp1] = 1;
		hash[temp2] = 1;
	}
	int allcount = 0;
	cin >> allcount;
	int temp3;
	string Stemp;
	vector<string> end;
	while (allcount--) {
		cin >> Stemp;
		temp3 = atoi(Stemp.c_str());
		if (hash[temp3] != 1)
			end.push_back(Stemp);
	}
	sort(end.begin(), end.end());
	for (vector<string>::iterator it = end.begin(); it != end.end(); it++)
		if (it != end.begin())
			cout << *it;
	return 0;
}