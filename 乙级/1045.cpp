#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
using namespace std;
string lowmarnum[13] = { "tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec" };
string highmarnum[13] = { "tret","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou" };
void numtomar(string have) {
	int num = atoi(have.c_str());
	if (num >= 13) {
		int carry = num / 13;
		int remain = num - carry * 13;
		cout << highmarnum[carry - 1] << " ";
		cout << lowmarnum[remain] << endl;
	}
	else {
		cout << lowmarnum[num] << endl;
	}
}
void martonum(string have) {
	if (have.size()>3) {
		string high;
		for (int i = 0; i<4; i++) {
			if (i != 3)
				high.push_back(have[i]);
		}
		have.erase(0, 4);
		int num = 0;
		for (int j = 0; j < 12; j++) {
			if (high == highmarnum[j]) {
				num += (j  * 13);
				break;
			}
		}
		for (int t = 0; t<12; t++) {
			if (have == lowmarnum[t]) {
				num += t;
				break;
			}
		}
		cout << num << endl;
	}
	else {
		int i = 0;
		int sign = 0;
		for (; i<12; i++) {
			if (lowmarnum[i] == have) {
				sign = 1;
				break;
			}
		}
		if(sign==1)
			cout << i << endl;
		else {
			for (i=0; i<12; i++) {
				if (highmarnum[i] == have) {
					break;
				}
			}
			cout << 13 * i << endl;
		}
	}
}
int main() {
	int count = 0;
	cin >> count;
	getchar();
	string have;
	while (count--) {
		getline(cin, have);

		if (have[0] >= '0'&&have[0] <= '9')
			numtomar(have);
		else
			martonum(have);
	}
	return 0;
}