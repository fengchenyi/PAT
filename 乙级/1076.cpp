#include<iostream>
#include<vector>
using namespace std;
int main(){
	int num = 0;
	cin >> num;
	vector<int> result;
	for (int i = 0; i < num; i++) {
		char choice;
		char correct;
		char temp;
		int j = 0;
		for (; j < 4; j++) {
			cin >> choice >> temp >> correct;
			if (correct == 'T') {
				result.push_back(choice-'A'+1);
			}
		}
	}
	for(int i=0;i<result.size();i++)
		cout << result[i];
	system("pause");
	return 0;
}
