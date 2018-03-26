#include<iostream>
#include<cstdio>
using namespace std;
int main (){
	double Nk[1002]={0};
	int K=0;//计算两组数据有多少个项
	cin>>K;
	for(int i=0;i<K;i++){
		int nk=0;
		double para=0;
		cin>>nk>>para;
		Nk[nk] = para;		
	} 
	cin>>K; 
	for(int j=0;j<K;j++){
		int nk=0;
		double para=0;
		cin>>nk>>para;
		Nk[nk] += para;
	}
	int count=0;
	for(int k=0;k<1001;k++){
		if(Nk[k]!=0)
			count++;
	}
	cout<<count;
	for(int t=1001;t>=0;t--){
		if(Nk[t]!=0)
			printf(" %d %.1f",t,Nk[t]);
	}
	cout<<endl;
	return 0;
} 
