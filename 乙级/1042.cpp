#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int  main() {
	int hash[300] = { 0 };
	string have;
	getline(cin, have);
	for (int i = 0; i<have.size(); i++) {
		if (have[i] >= 'A'&&have[i] <= 'Z') {
			hash[have[i] + ('a' - 'A')]++;
		}
		else if (have[i] >= 'a'&&have[i] <= 'z') {
			hash[have[i]]++;
		}
	}
	int max = 0;
	char end;
	for (int i = 'a'; i <= 'z'; i++) {
		if (hash[i]>max){
			max = hash[i];
			end=char(i);
		}
	}
	printf("%c %d\n",end, max);
	return 0;
}
