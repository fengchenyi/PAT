#include<iostream> 
#include<list>
#include<string> 
#include<cstdio>
using namespace std;
int main (){
	string A;
	string B;
	cin>>A;
	cin>>B;
	for(int i=0;i<A.size();i++){
		for(int j=0;j<B.size();j++){
			if(A[i]==B[j]&&A[i]!=1&&B[j]!=1){
				A[i]=1;
				B[j]=1;
			}
		}
	}
	int hash[200]={0};
	for(int i=0;i<A.size();i++){
		if(A[i]>='a'&&A[i]<='z'){
			A[i]=A[i]-('a'-'A');
		}
		if(A[i]!=1&&hash[A[i]]==0){
			cout<<A[i];
			hash[A[i]]=1;
		}
	}
	cout<<endl;
	return 0;
}
