#include<iostream>
#include<string> 
using namespace std;
int main (){
	int hash[300]={0};
	int needhash[300]={0}; 
	int end[300];
	string have;
	string need;
	cin>>have;
	cin>>need;
	int sign=1;//初始设为可以 
	int count=0;
	int negcount=0;
	for(int i=0;i<have.size();i++){
		hash[have[i]]++;
	}
	for(int i=0;i<need.size();i++){
		needhash[need[i]]++;
	}
	for(int t=0;t<300;t++){
		end[t]=hash[t]-needhash[t];
		if(end[t]>0)
			count+=end[t];
		if(end[t]<0){
			negcount+=(-1*end[t]); 
			sign=0;
		}
	}
	if(sign==0)
		cout<<"No "<<negcount<<endl;
	else
		cout<<"Yes "<<count<<endl;
	return 0;
}
