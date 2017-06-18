
#include<iostream>
using namespace std;
int main (){
int a;
  cin>>a;
  int b=((a+2)%7);
  if(b==0){
    b=7;
  }
 cout<<b;
return 0;
}
