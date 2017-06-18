#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main (){
  string A,B;
  int Da,Db;
  cin>>A>>Da>>B>>Db;
  long long int Enda=0,Endb=0;
  int counta=0,countb=0;
  for(int i=0;i<A.size();i++){
    if(A[i]==(Da+'0'))
      counta++; 
  }
  for(int j=0;j<B.size();j++){
    if(B[j]==(Db+'0'))
      countb++; 
  } 
  for(int i=0;i<counta;i++){
    Enda += Da*pow(10.0,i);
  }
  for(int j=0;j<countb;j++){
    Endb += Db*pow(10.0,j);
  }
  cout<<(Enda+Endb)<<endl;
  return 0;
}
