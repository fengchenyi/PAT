#include<iostream>
#include<string>
using namespace std;
void print(char it){
  switch (it)
  {
  case '-':cout << "fu"; break;
  case '1':cout << "yi"; break;  
  case '2':cout << "er"; break;
  case '3':cout << "san"; break;
  case '4':cout << "si"; break;
  case '5':cout << "wu"; break;
  case '6':cout << "liu"; break;
  case '7':cout << "qi"; break;
  case '8':cout << "ba"; break;
  case '9':cout << "jiu"; break;
  case '0':cout << "ling"; break;
  default:
    break;
  }
}
int  main(){
  string num;
  cin >> num;
  for (int i = 0; i < num.size(); i++){
    print(num[i]);
    if (i != num.size() - 1){
      cout << ' ';
    }
  }
  getchar();
  getchar();
  return 0;
}
