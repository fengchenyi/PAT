#include<iostream>
using namespace std;
int isodd(int num){
	return num%2;
}
int main ()
{
	int count;
	char need;
	cin>>count>>need;
	for(int i=0;i<count;i++)
		cout<<need;
	cout<<endl;
	int row;
	if(isodd(count)==1)
		row=count/2-1;
	else
		row=count/2-2;
	for(int t=0;t<row;t++){
		for(int i=0;i<count;i++){
		if(i==0||i==count-1)
			cout<<need;
		else
			cout<<" ";	
		}
		cout<<endl;
	}
	for(int i=0;i<count;i++)
		cout<<need;
	cout<<endl;
	return 0;
	
}
