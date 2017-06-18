#include<iostream>
#include<string>
using namespace std;
 int Max(int a, int b){
  return  (a<b) ? a : b;
}
int main(){
  int a, b, c;
  int x, y, z;
  cin >> a >> b >> c;
  x = Max(Max(b, c), a);
  if (x == a){
    y = Max(b, c);
    if (y == b){
      z = c;
    }
    else
      z = b;
  }
  else if (x == b){
    y = Max(a, c);
    if (y == a){
      z = c;
    }
    else
      z = a;
  }
  else{
    y = Max(a, b);
    if (y == a)
      z = b;
    else
      z = a;
  }
  cout << x <<"->" <<y <<"->"<< z;
  
  return 0;
}
