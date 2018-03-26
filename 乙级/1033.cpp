#include<iostream>
#include<string> 
using namespace std;
int main() {
	int hash[200] = { 0 };
	string bad;
	cin >> bad;
	for (int i = 0; i<bad.size(); i++) {
		if (hash[i] == 0) {
			hash[bad[i]] = 1;
			if (bad[i] >= 'A'&&bad[i] <= 'Z') {
				hash[bad[i] + ('a' - 'A')] = 1;
			}
		}
	}
	if (hash['+'] == 1) {
		for (int i = 'A'; i <= 'Z'; i++)
			hash[i] = 1;
	}
	string have;
	cin >> have;
	for (int i = 0; i<have.size(); i++) {
		if(hash[have[i]] == 0)
			cout << have[i];
	}
	cout << endl;
	system("pause");
	return 0;
}