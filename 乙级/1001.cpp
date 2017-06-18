include<iostream>
using namespace std;
int isodd(int num){
  return num%2;
}
int main (){
  
  int num;
  int count=0;
  cin>>num;
  if(num==1){
    cout<<0;
    return 0;
  }
  while(num!=1){
    if(isodd(num)==1){
      num=(3*num+1)/2;
      count++;    
    }
    else{
      num/=2;
      count++;
    }
  }
  cout<<count<<endl;
  return 0;
} 
