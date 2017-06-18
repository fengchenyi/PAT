#include<iostream>
#include<iomanip>
#include<vector>
#include<cstdio>
using namespace std;

int main(){
  int num;
  int count;
  vector<int> A1, A2, A5;
  vector<float> A4;
  int addA1 = 0;
  int crossaddA2 = 0;
  int countA3 =0;
  float averageA4 = 0;
  int maxA5 = 0;
  cin >> count;
  int signA2 = 0;//标记a2是否有数以避免何为0但任会输出N的情况
  int signA1 = 0;
  while (count--!=0){
    cin >> num;
    if (num % 10 == 0){
      A1.push_back(num);
    }
    else if (num % 5 == 1){
      A2.push_back(num);
    }
    else if (num % 5 == 2){
      countA3++;
    }
    else if (num % 5 == 3){
      A4.push_back(num);
    }
    else if (num % 5 == 4){
      A5.push_back(num);
    }
  }
  for (int i = 0; i < A1.size(); i++){
    if (A1[i] % 10 == 0){
      addA1 += A1[i];
    }
  }
  if (A1.size() != 0){
    signA1 = 1;
  }
  if (A2.size() != 0){
    signA2 = 1;
  }
  for (int i = 0; i < A2.size(); i++){
    if (i % 2 == 0){
      crossaddA2 += A2[i];
    }
    else{
      crossaddA2 -= A2[i];
    }
  }
  for (int i = 0; i < A4.size(); i++){
    averageA4 += A4[i];
  }
  if (A4.size() != 0){
    averageA4 /= A4.size();
  }
  for (int i = 0; i < A5.size(); i++){
    if (maxA5 < A5[i]){
      maxA5 = A5[i];
    }
  }
  float end[5] = { 0 };
  end[0] = addA1; end[1] = crossaddA2; end[2] = countA3; end[3] = averageA4; end[4] = maxA5;
  for (int i = 0; i < 5; i++){
    if (end[i] == 0){
      if (i == 1 && signA2 == 1){
        cout << "0 ";
      }
      else if (i == 0 && signA1 == 1){
        cout << "0 ";
      }
      else{
        cout << "N";
        if (i != 4)
          cout << " ";
      }
    }
    else{
      if (i == 3)
        printf("%.1f", end[i]);
      else
        cout << end[i];
      if (i != 4)
        cout << " ";
    }
  }
  return 0;
}

