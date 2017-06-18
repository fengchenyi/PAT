#include<iostream>
#include<string>
using namespace std;
typedef struct student{
  string name;
  string no;
  int score;
}Sstudent;
int main(){
  int count;
  cin >> count;
  Sstudent *Slist = new Sstudent[count];
  for (int i = 0; i<count; i++){
    cin >> Slist[i].name >> Slist[i].no >> Slist[i].score;
  }
  int max = 0, min = 0;
  int maxScore = 0, minScore = 100;
  for (int i = 0; i<count; i++){
    if (Slist[i].score>maxScore){
      max = i;
      maxScore = Slist[i].score;
    }
    if (Slist[i].score<minScore){
      min = i;
      minScore = Slist[i].score;
    }
  }
  cout << Slist[max].name <<" "<< Slist[max].no << endl;
  cout << Slist[min].name <<" "<< Slist[min].no << endl;
  delete []Slist;
  return 0;
}
