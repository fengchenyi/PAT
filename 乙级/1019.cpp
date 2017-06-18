#include<iostream>
#include<string>
#include<cstdlib>
#include<algorithm>
#include<sstream>
#include<functional>
using namespace std;
int main (){
  int num;
  string beg;
  cin>>num;
  int result;
  int big;
  int small;
  string Btemp;
  string Stemp; 
  stringstream tt;
  tt<<num;
  tt>>beg;
  if(beg.size()!=4){
    beg.insert(0,(4-beg.size()),'0');
  }
  while(result!=6174){
    sort(beg.begin(),beg.end(),greater<char>());
    Btemp=beg;  
    sort(beg.begin(),beg.end(),less<char>());
    Stemp=beg;
    if(Btemp==Stemp){
      cout<<Btemp<<" - "<<Stemp<<" = 0000"<<endl;
      break;
    }
    big=atoi(Btemp.c_str());
    small=atoi(Stemp.c_str());
    result=big-small; 
    stringstream stringss;
    stringss<<result;
    stringss>>beg;
    if(beg.size()!=4){
      beg.insert(0,(4-beg.size()),'0');
    }
    if(Btemp.size()!=4){
      Btemp.insert(0,(4-Btemp.size()),'0');
    }
    if(Stemp.size()!=4){
      Stemp.insert(0,(4-Stemp.size()),'0');
    }
    cout<<Btemp<<" - "<<Stemp<<" = "<<beg<<endl;
  }
  return 0;
}
