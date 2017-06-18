8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main(){
  stack<string> temp;
  string have;
  getline(cin, have);
  string store;
  int j;
  for (int i = 0; i<have.size();i=j){
    j= i;
    while (have[j] != ' '&& have[j] !=0){
      store.push_back(have[j++]);
    }
    if (have[j] == ' '){
      temp.push(store);
      store.clear();
      j++;
    }
    else if (have[j] == 0){
      temp.push(store);
      store.clear();
      have.clear();
      break;
    }
  }
  while (!temp.empty()){
    have += temp.top();
    temp.pop();
    if (temp.size() != 0)
      have += " ";
  }
  cout << have << endl;
  return 0;
}
