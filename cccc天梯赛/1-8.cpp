#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
  float beg;
  float end;
  float result = 0;
  cin >> beg >> end;
  int flag = 0;
  result = (beg + end)*(end - beg + 1) / 2;
  for (int i = beg;i <= int(end); i++){
    printf("%5d", i);
    flag++;
    if (flag == 5){
      cout << endl;
      flag = 0;
    }
  }
  int judge = end - beg + 1;
  if (judge % 5 != 0)
    cout << endl;
  cout << "Sum = " << result;
  return 0;
}
