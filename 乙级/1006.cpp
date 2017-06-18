
#include<iostream>
#include<string>
using namespace std;
int main (){
  string temp;
  cin>>temp;
  if(temp.size()==3){
      for(int i=1;i<=temp[0]-'0';i++)
        cout<<'B';
      for(int i=1;i<=temp[1]-'0';i++)
        cout<<'S';        
      for(int i=1;i<=temp[2]-'0';i++)
        cout<<i;
  }
  else if(temp.size()==2){
      for(int i=1;i<=temp[0]-'0';i++)
        cout<<'S';        
      for(int i=1;i<=temp[1]-'0';i++)
        cout<<i;
  }
  else if(temp.size()==1){
    for(int i=1;i<=temp[0]-'0';i++)
      cout<<i;
  }
  else if(temp.size()==0){
    cout<<0;
  }
  return 0;
}
