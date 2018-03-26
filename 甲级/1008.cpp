#include<iostream>
using namespace std;
int main (){
	int have=0;
	int now=0; 
	int all=0;
	int count=0;
	cin>>count;
	int c=count;
	while(count--){
		cin>>have;
		if(have<now){
		
			all += 4*(now-have);
		
		}
		else if(have>now){
			all += 6*(have-now);
		
		}
		else if(have==now)
			;
		
		now=have;
	}
	all=all+c*5;
	cout<<all<<endl;
	return 0;
} 
