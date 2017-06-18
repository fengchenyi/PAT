#include<iostream>
#include<string>
using namespace std;
typedef struct rel{
  int win;
  int lose;
  int equal;
}Result;
int judge(char A, char B){
  if (A == B)
    return 0;//ping
  else {
    if (A == 'C'){
      if (B == 'J')
        return 1;
      else
        return -1;
    }
    else if (A == 'J'){
      if (B == 'C')
        return -1;
      else
        return 1;
    }
    else{
      if (B == 'J')
        return -1;
      else
        return 1;

    }
  }
}
int main(){
  Result A = { 0, 0, 0 };
  Result B = { 0, 0, 0 };
  char result[3] = {'B','C','J'};
  char As, Bs;
  int count;
  cin >> count;
  int Amax[3] = { 0, 0, 0 };
  int Bmax[3] = { 0, 0, 0 };
  for (int i = 0; i<count; i++){
    cin >> As>>Bs;
    if (judge(As, Bs) == 0){//如果平局 
      A.equal++;
      B.equal++;
    }
    else if (judge(As, Bs) == 1){
      A.win++;
      B.lose++;
      if (As == 'C')
        Amax[1]++;
      else if (As == 'J')
        Amax[2]++;
      else
        Amax[0]++;
    }
    else{
      A.lose++;
      B.win++;
      if (Bs == 'C')
        Bmax[1]++;
      else if (Bs == 'J')
        Bmax[2]++;
      else
        Bmax[0]++;
    }
  }
  cout << A.win << " " << A.equal << " " << A.lose << endl;
  cout << B.win << " " << B.equal << " " << B.lose << endl;
  if (count != 0){
    int max = 0;
    int num = 1;
    for (int i = 0; i < 3; i++){
      if (max <= Amax[i]){
        max = Amax[i];
      }
    }
    for (int i = 0; i < 3; i++){
      if (max == Amax[i]){
        cout << result[i] << " ";
        break;
      }
    }
    max = 0;
    for (int i = 0; i < 3; i++){
      if (max <= Bmax[i]){
        max = Bmax[i];
      }
    }
    for (int i = 0; i < 3; i++){
      if (max == Bmax[i]){
        cout << result[i]<<endl;
        break;
      }
    }
  }
  return 0;
}
