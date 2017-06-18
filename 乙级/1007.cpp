#include<iostream>
#include<cmath> 
#include<vector>
using namespace std;
int main (){
  int num;
  cin>>num;
  if(num<5){
    cout<<0<<endl;
    return 0;
  }
  vector<int> prime;
  prime.push_back(2);
  for(int i=3;i<=num;i=i+2){
    int j=i; //对j进行测试 
    int flag=0;//若为1，则是he数 
    int temp=3;
    for(;temp<=sqrt(j);temp=temp+2){
      if(j%temp==0){
        flag=1;
        break; 
      }
    }
    if(flag==0){
      prime.push_back(j);
    }
  }
  int count=0;
  for(int i=1;i<prime.size();i++){
    if(prime[i]-prime[i-1]==2){
      count++;
    }
  }
  cout<<count<<endl;
  return 0;
}
