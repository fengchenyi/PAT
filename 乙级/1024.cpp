#include<iostream>
#include<string>
#include<list>
#include<cstdlib>
#include<cstdio>
using namespace std;
int main() {
	string have;
	cin >> have;
	string end;
	int sign = 1;
	if (have[0] == '-') {
		cout << '-';
	}
	int zeronum;
	for (int i = 0; i<have.size(); i++) {
		if (have[i] == 'E') {
			if (have[i + 1] == '-') {
				sign = 0;//标记小数点向前移 
				end.push_back('0');
				end.push_back('.');
			}
			string temp;
			temp.resize(have.size() - i - 2);
			int t = i + 2;
			for (int j = 0; j<have.size() - i - 2; j++) {
				temp[j] = have[t++];//由于找到后直接break，无需顾忌这里的i++ 
			}
			zeronum = atoi(temp.c_str());//取出前移或者后移的数目 
			break;
		}
	} //到这里为止已经做好处理 ,需要的0的个数 
	if (zeronum == 0) {//指数为0
		for (int i = 1; i<have.size(); i++) {
			if (have[i] == 'E')
				break;
			cout << have[i];
		}
		cout << endl;
		return 0;
	}
	if (sign == 0) {//前移的情况
		while (--zeronum) {
			end.push_back('0');
		}
		int j = 1;
		for (; j<have.size(); j++) {
			if (have[j] == 'E')
				break;
			if (have[j] == '.')
				continue;
			end.push_back(have[j]);
		}

	}
	else { 		//后移，需要比较后移数目与小数点后面的数的多少
		int backnum = 0;
		for (int i = 1; i<have.size(); i++) {
			if (have[i] != '.')
				continue;
			else {
				for (int j = i; j<have.size(); j++) {
					if (have[j] == 'E')
						break;
					backnum++;
				}
				break;
			}
		}
		backnum--;//减去多数的一位
		if (backnum>zeronum) {
			for (int i = 1; i<have.size(); i++) {
				if (i == 2 + zeronum + 1)
					end.push_back('.');
				if (have[i] == '.')
					continue;
				if (have[i] == 'E')
					break;
				end.push_back(have[i]);
			}
		}
		else {
			int endzeronum;
			int j = 1;
			for (; j<have.size(); j++) {
				if (have[j] == 'E') {
					break;
				}
				if (have[j] == '.') {
					continue;
				}
				end.push_back(have[j]);
			}
			zeronum -= backnum;
			if (zeronum > 0) {
				while (zeronum--) {
					end.push_back('0');
				}
			}
		}
	}
	cout << end << endl;
	getchar();
	getchar();
	return 0;
}