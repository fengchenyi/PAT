#include<iostream>
#include<string>
using namespace std;
int main(){
  int count;
  cin >> count;
  int have[17] = { 7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2 };
  char ZM[11] = { '1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2' };
  string *id = new string[count];
  int flag = 1;
  int i = 0;
  for (; i<count; i++){
    cin >> id[i];
  }
  int m = 0;
  while (m<count){
    int sign = 1;
    for (int t = 0; t<17; t++){
      if (id[m][t]<'0' || id[m][t]>'9'){
        sign = 0;
        flag = 0;
        cout << id[m] << endl;
        break;
      }
    }
    if (sign == 0){
      m++;
      continue;
    }
    int end_number = 0;
    for (int j = 0; j<17; j++){
      end_number += (id[m][j] - '0')*have[j];
    }
    end_number %= 11;
    if (ZM[end_number] != *(id[m].end() - 1)){
      flag = 0;
      cout << id[m] << endl;
    }
    m++;
  }
  if (flag == 1){
    cout << "All passed" << endl;
  }
  return 0;
}
