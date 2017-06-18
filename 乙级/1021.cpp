#include<iostream>
#include<string>
using namespace std;
int main (){
  int num[10]={0};
  string a;
  cin>>a;
  for(int i=0;i<a.size();i++){
    num[a[i]-'0']++;
  }
  for(int i=0;i<10;i++){
    if(num[i]!=0){
      cout<<i<<":"<<num[i]<<endl;
    }
  }
  return 0;
}
