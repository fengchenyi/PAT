#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int oldyear=2014,oldmonth=9,oldday=6;
int youngyear=1814,youngmonth=9,youngday=6;
int check(int year,int month,int day){
	 if(year<1814||(year==1814&&month<9)||(year==1814&&month==9&&day<6)||
	 	year>2014||(year==2014&&month>9)||(year==2014&&month==9&&day>6)){
	 	return 0;
	 }
	 else
	 	return 1;
}
int	main(){
	int count=0;
	int year,month,day;
	cin>>count;
	string name;
	string oldest;
	string youngest;
	char c; 
	int num=0;
	while(count--){
		cin>>name>>year>>c>>month>>c>>day;
		if(check(year,month,day)==1){
			if(year<oldyear||(year==oldyear&&month<oldmonth)||(year==oldyear&&month==oldmonth&&day<oldday)){
				oldday=day;
				oldmonth=month;
				oldyear=year;
				oldest=name;
			}
			if(year>youngyear||(year==youngyear&&month>youngmonth)||(year==youngyear&&month==youngmonth&&day>youngday)){
				youngday=day;
				youngmonth=month;
				youngyear=year;
				youngest=name;
			}
			num++;
		}
		else
			continue;
	}
	if(num==0)
		cout<<0<<endl;
	else
		cout<<num<<" "<<oldest<<" "<<youngest<<endl;
	return 0;
} 
