#include<iostream>
#include<string>
//典型的滑块思想 
using namespace std;
int main (){
	string have;
	int count=0;
	int p=0,a=0,t=0;
	cin>>have; 
	for(int i=0;i<have.size();i++){
		if(have[i]=='T')
			t++;
	}	
	for(int i=0;i<have.size();i++){
		if(have[i]=='P')
			p++;
		if(have[i]=='T')
			t--;
		if(have[i]=='A')
			count +=p*t;
		if(count>=1000000007)
			count=count%1000000007;	
	}
	cout<<count<<endl;
	return 0;
}
