#include<iostream>
#include<string> 
#include<sstream> 
using namespace std;
int main (){
	string result[]={"zero","one","two","three","four","five","six","seven","eight","nine"}; 
	string sum;
	cin>>sum;
	int end=0;
	for(int i=0;i<sum.size();i++){
		end += sum[i]-'0';
	}	
	stringstream temp;
	temp<<end;
	string Re;
	temp>>Re;
	for(int i=0;i<Re.size();i++){
		cout<<result[Re[i]-'0'];
		if(i!=Re.size()-1)
			cout<<" ";
	}
	cout<<endl;
	return 0;
} 
