#include<iostream>
#include<string>
using namespace std;
int main(){
  string a;
  string b;
  int hash[256] = { 0 };
  a.resize(10000);
  b.resize(10000);
  getline(cin, a);
  getline(cin, b);
  for (int i = 0; i <b.size(); i++){
    for (int j = 0; j < a.size(); j++){
      if (hash[b[i]] == 1) break;
      if (a[j]==b[i]){
        a.erase(j,1);
        j--;
      }
    }
    hash[b[i]] = 1;
  }
  cout << a;
  return 0;
}
