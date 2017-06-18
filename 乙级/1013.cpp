#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int beg, end;
  int num[10001];
  num[1] = 2; num[2] = 3; num[3] = 5; num[4] = 7;
  int count = 5;
  int i = 9;
  while (count != 10001){
    int temp = i;
    int flag = 0;
    for (int t = 3; t <= sqrt(temp); t = t + 2) {
      if (temp%t == 0){
        flag = 1;
        break;
      }
      else
        ;
    }
    if (flag == 0){
      num[count++] = temp;
    }
    i = i + 2;
  }
  int sign = 1;
  cin >> beg >> end;
  for (; beg <= end; beg++){
    if (sign % 10 == 0)
      cout << num[beg] << endl;
    else if (beg == end)
      cout << num[beg];
    else
      cout << num[beg] << ' ';
    sign++;
  }
  return 0;
}
