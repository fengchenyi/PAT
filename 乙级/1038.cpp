#include<iostream>
#include<cstdio>
#include<functional>
#include<algorithm>
using namespace std;
int main(){
	int count;
	cin>>count;
	int needcount;
	int hash[101];
	for(int i=0;i<101;i++){
		hash[i]=0;
	} 
	int *score=new int[count];
	for(int i=0;i<count;i++){
		int temp;
		scanf("%d",&temp);
		hash[temp]++;	
	}
	cin>>needcount;
	for(int i=0;i<needcount;i++){
		int temp;
		scanf("%d",&temp);
		printf("%d",hash[temp]);
		if(i!=needcount-1)
			printf(" ");
	}
	return 0;
}
