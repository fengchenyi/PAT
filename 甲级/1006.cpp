#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>
#include<functional>
#include<iostream> 
using namespace std;
typedef struct people {
	string ID_number;
	int Sign_in_time_H;
	int Sign_in_time_M;
	int Sign_in_time_S;
	int Sign_out_time_H;
	int Sign_out_time_M;
	int Sign_out_time_S;
	bool operator >(const people&rhs)const {
		if (Sign_in_time_H != rhs.Sign_in_time_H) {
			return Sign_in_time_H<rhs.Sign_in_time_H;
		}
		else {
			if (Sign_in_time_M != rhs.Sign_in_time_M)
				return Sign_in_time_H<rhs.Sign_in_time_H;

			else {
				if (Sign_in_time_S != rhs.Sign_in_time_S)
					return  Sign_in_time_S<rhs.Sign_in_time_S;
				else
					return  Sign_in_time_S>rhs.Sign_in_time_S;
			}
		}
	}
	bool operator <(const people&rhs)const {
		if (Sign_out_time_H != rhs.Sign_out_time_H) {
			return Sign_out_time_H>rhs.Sign_out_time_H;
		}
		else {
			if (Sign_out_time_M != rhs.Sign_out_time_M)
				return Sign_out_time_H>rhs.Sign_out_time_H;

			else {
				if (Sign_out_time_S != rhs.Sign_out_time_S)
					return  Sign_out_time_S>rhs.Sign_out_time_S;
				else
					return  Sign_out_time_S<rhs.Sign_out_time_S;
			}
		}
	}
}People;
int main() {
	int count;
	cin >> count;
	People *all = new People[count];
	char temp;
	for (int i = 0; i<count; i++) {
		cin>> all[i].ID_number;
		scanf("%d:%d:%d", &all[i].Sign_in_time_H, &all[i].Sign_in_time_M, &all[i].Sign_in_time_S);
		scanf("%d:%d:%d", &all[i].Sign_out_time_H, &all[i].Sign_out_time_M, &all[i].Sign_out_time_S);
	}
	sort(all, all + count, greater<People>());
	cout << all[0].ID_number<<" ";
	sort(all, all + count, less<People>());
	cout << all[0].ID_number << endl;
	
	return 0;
}
