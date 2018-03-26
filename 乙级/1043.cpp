#include<iostream>
#include<string>
using namespace std;
int main() {
	int hash[6] = { 0 };
	string have;
	cin >> have;
	int count = 0;
	for (int i = 0; i<have.size(); i++) {
		if (have[i] == 'P' || have[i] == 'A' || have[i] == 'T' ||
			have[i] == 'e' || have[i] == 's' || have[i] == 't') {
			count++;
			if (have[i] == 'P')
				hash[0]++;
			else if (have[i] == 'A')
				hash[1]++;
			else if (have[i] == 'T')
				hash[2]++;
			else if (have[i] == 'e')
				hash[3]++;
			else if (have[i] == 's')
				hash[4]++;
			else if (have[i] == 't')
				hash[5]++;
		}
	}
	int sign = 0;
	for (int i = 0; i < count; i++) {
		if (sign == 6)
			sign = 0;
		if (hash[sign] == 0) {
			sign++;
			i--;
			continue;
		}
		if (sign == 0 && hash[sign] > 0) {
			cout << 'P';
			hash[sign]--;

		}
		else if (sign == 1 && hash[sign] > 0) {
			cout << 'A';
			hash[sign]--;
		}
		else if (sign == 2 && hash[sign] > 0) {
			cout << 'T';
			hash[sign]--;
		}
		else if (sign == 3 && hash[sign] > 0) {
			cout << 'e';
			hash[sign]--;
		}
		else if (sign == 4 && hash[sign] > 0) {
			cout << 's';
			hash[sign]--;
		}
		else if (sign == 5 && hash[sign] > 0) {
			cout << 't';
			hash[sign]--;
		}
		sign++;
	}
	return 0;
}