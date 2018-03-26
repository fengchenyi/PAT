#include<iostream>
#include<string>	
using namespace std;
int main() {
	string have;
	long long int count = 0;
	int Pcount = 0;
	int Acount = 0;
	int Tcount = 0;
	cin >> have;
	int i = 0;
	int j = 0;
	int t = 0;
	int a = 0;
	int m = 0;
	for (int t = i; t<have.size() - 1; t++) {
		Pcount = 0;
		a = 0;
		if (have[t] != 'P')
			continue;
		for (i=t; i<have.size() - 2; i++) {
			if (have[i] == 'P') {
				Pcount++;
				a++;
			}
			else {
				break;
			}
		}
		int n = i;
			for (j = n; j < have.size() - 1; j++) {
				if (have[j] == 'A') {
					Acount++;
					n++;
				}
				else {
					if (Acount != 0) {
						for (m = j; m < have.size(); m++) {
							if (have[m] == 'T')
								Tcount++;
						}
						if (count >= 1000000007) {
							count -= 1000000007;
							count += Pcount*Acount*Tcount;
						}
						else
							count += Pcount*Acount*Tcount;
						Acount = 0;
						Tcount = 0;
					}
			}
		}
			t += a;
	}
	cout << count << endl;

	return 0;
}