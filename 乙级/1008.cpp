#include<iostream>
#include<list>
using namespace std;
int main(){
  int lenth;
  int needre;
  cin >> lenth >> needre;
  list<int> num;
  int temp;
  while (lenth-- ){
    cin >> temp;
    num.push_back(temp);
  }
  while (needre--){
    temp = num.back();
    num.pop_back();
    num.push_front(temp);
  }
  list<int> ::iterator it= num.begin();
  for (int i = 0; i < num.size(); i++){
    cout << *it++;
    if (i != num.size() - 1){
      cout << " ";
    }
  }
    return 0;
}
