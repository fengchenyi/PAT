#include<iostream>
using namespace std;
int isodd(int num){
  if(num%2==1)
    return 1;
  else 
    return 0;
}
int main (){
  int count;
  char t;
    cin>>count>>t;
    int row;
    if(isodd(count)){
      row=(count/2)+1;
  }
  else
    row=count/2;
  for(int i=0;i<row;i++){
    for(int j=0;j<count;j++){
      cout<<t;
    }
    cout<<endl;
  }
  return 0;
}
