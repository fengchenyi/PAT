#include<iostream>
#include<string>
#include<stdlib.h> 
using namespace std;
int main (){
  string test;
  int hash[10]={0};
  cin>>test;
  for(int i=0;i<test.size();i++){
    hash[test[i]-48]++;
  }
  for(int i=0;i<10;i++){
    if(hash[i]!=0){
      cout<<i<<":"<<hash[i]<<endl;
    }
  }
  return 0;
}
