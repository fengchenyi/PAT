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
				sign = 0;//���С������ǰ�� 
				end.push_back('0');
				end.push_back('.');
			}
			string temp;
			temp.resize(have.size() - i - 2);
			int t = i + 2;
			for (int j = 0; j<have.size() - i - 2; j++) {
				temp[j] = have[t++];//�����ҵ���ֱ��break������˼������i++ 
			}
			zeronum = atoi(temp.c_str());//ȡ��ǰ�ƻ��ߺ��Ƶ���Ŀ 
			break;
		}
	} //������Ϊֹ�Ѿ����ô��� ,��Ҫ��0�ĸ��� 
	if (zeronum == 0) {//ָ��Ϊ0
		for (int i = 1; i<have.size(); i++) {
			if (have[i] == 'E')
				break;
			cout << have[i];
		}
		cout << endl;
		return 0;
	}
	if (sign == 0) {//ǰ�Ƶ����
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
	else { 		//���ƣ���Ҫ�ȽϺ�����Ŀ��С�����������Ķ���
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
		backnum--;//��ȥ������һλ
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