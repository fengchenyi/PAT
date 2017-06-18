#include<iostream>
#include<string>
#include<sstream> 
using namespace std;
void  print(string end){
  for (int i = 0; i<end.size(); i++){
    switch (end[i]){

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
    }
    if (i != end.size() - 1)
      cout << " ";
    else if (i == end.size() - 1)
      cout << endl;
  }
}
int main(){
  string num;
  cin >> num;
  int all = 0;
  for (int i = 0; i<num.size(); i++){
    all = all + num[i] - 48;
  }
  stringstream stream;
  stream << all;
  string end;
  stream >> end;
  print(end);
  return 0;
}
