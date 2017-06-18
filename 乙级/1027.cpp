#include<iostream>
using namespace std;
int main (){
	int have;
	char character;
	cin>>have>>character;
	int max=1;
	int t=1;
	int times=0;
	for(;t<=have;){
		max = max+2;
		t += max*2;
		times++;
	}
	t -=max*2;
	max=max-2;
	for(int i=0;i<times;i++){
		for(int j=0;j<max-i;j++){
			if(j<i)
				cout<<" ";
			else if(i+j<max)
				cout<<character;	
		}
		cout<<endl;
	}
	int lose=times-2;
	for(int i=0;i<times-1;i++,lose--){
		for(int j=0;j<max-lose;j++){
			if(i+j<times-2)
				cout<<" ";
			else if(j-i<=times+1)
				cout<<character;
		}
		cout<<endl;
	}
	cout<<have-t;
	return 0;
} 
