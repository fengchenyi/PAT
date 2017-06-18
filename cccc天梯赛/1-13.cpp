#include<iostream>
using namespace std;
int main(){
  int num;
  cin >> num;
  long long int end = 0;
  int temp = 1;
  for (int i = 1; i <= num; i++){
    temp = i * temp;
    end += temp;
  }
  cout << end;
  return 0;
}
