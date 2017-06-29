#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;
int main (){
	int count;
	cin>>count;
	int *num=new int[count];
	int *temp=new int [count];
	vector<int> end;
	int max=num[0];
	for(int i=0;i<count;i++){
		scanf("%d",&num[i]);
		temp[i]=num[i];
	}
	sort(num,num+count);
	for(int i=0;i<count;i++){
		if(max<temp[i])
			max=temp[i];
		if(temp[i]==num[i]&&max==temp[i])
			end.push_back(temp[i]);
	}
	cout<<end.size()<<endl;
	for(int i=0;i<end.size();i++){
		cout<<end[i];
		if(i!=end.size()-1)
			cout<<" ";
	}
	cout<<endl;
	delete []num;
	delete []temp;
	return 0;
}
