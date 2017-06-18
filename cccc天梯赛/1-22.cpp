#include<iostream>
using namespace std;
int isodd(int num){
  if(num%2==1)
    return 1;
  else 
    return 0;
}
int main (){
   int count =0;
   cin>>count;
   int *num=new int [count];
   int odd=0;
   int even=0;
   for(int i=0;i<count;i++){
     cin>>num[i];
   }
   for(int j=0;j<count;j++){
     if(isodd(num[j]))
       odd++;
     else
       even++;  
   }
   cout<<odd<<' '<<even;
  return 
