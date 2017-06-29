#include<iostream>
#include<string>
using namespace std;
typedef struct people
{
  string number;
  int ComSite;
  int TestSite;
}People;
int main(){
  int People_count;
  cin >> People_count;
  People *all = new People[People_count];
  for (int i = 0; i < People_count; i++){
    cin >> all[i].number;
    cin >> all[i].ComSite;
    cin >> all[i].TestSite;
  }
  int pre_find;
  cin >> pre_find;
  int *find = new int[pre_find];
  for (int i = 0; i < pre_find; i++){
    cin >> find[i];
  }
  for (int i = 0; i < pre_find; i++){
    for (int j = 0; j < People_count; j++){
      if (all[j].ComSite == find[i]){
        cout << all[j].number << " " << all[j].TestSite << endl;
      }
    }
  }
  return 0;
}
	return 0;
}
