#include<iostream>
#include<string>
using namespace std;
int main(){
  int aim[3] = { 0 };
  int count = 0;
  int time = 0;
  string bunchOne,bunchTwo,bunchThree,bunchFour;
  cin >> bunchOne >> bunchTwo >> bunchThree >> bunchFour;
  for (int i = 0; i <bunchOne.length()&&i<bunchTwo.length(); i++){
    if (bunchOne[i] == bunchTwo[i]&&time == 0 &&bunchOne[i]>='A'&&bunchOne[i]<='G'){
      aim[count++] = bunchOne[i] - 64;// A-64=1代表星期一;
      switch (aim[0])
      {
      case 1:cout << "MON "; break;
      case 2:cout << "TUE "; break;
      case 3:cout << "WED "; break;
      case 4:cout << "THU "; break;
      case 5:cout << "FRI "; break;
      case 6:cout << "SAT "; break;
      case 7:cout << "SUN "; break;
      }
      time++;
    }
    else if ((bunchOne[i] >= '0'&&bunchOne[i] <= '9') || (bunchOne[i] >= 'A'&&bunchOne[i] <= 'N')){
      if (bunchOne[i] == bunchTwo[i] && time == 1){
        if (bunchOne[i] >= '0'&&bunchOne[i] <= '9'){
          aim[count++] = bunchOne[i]-'0';
          cout << "0" << aim[1];
          break;
        }
        else if (bunchOne[i] >= 'A'&&bunchOne[i] <= 'N'){
          aim[count++] = bunchOne[i] - 55;//A-55=10
          cout << aim[1];
          break;
        }
      }
    }
  }
  for (int i = 0; i <bunchThree.length()&&i<bunchFour.length(); i++){
    if ((bunchThree[i] >= 'a'&&bunchThree[i] <= 'z') || (bunchThree[i] >= 'A'&&bunchThree[i] <= 'Z'))
      if (bunchThree[i] == bunchFour[i]){
        aim[2] = i;
        break;
    }
  }
  if (aim[2]<10)
    cout << ":0" << aim[2];
  else
    cout << ":" << aim[2];
    return 0;
}
