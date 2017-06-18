#include<iostream>
#include<string>
using namespace std;
int main (){
  string bedivd;
  int num;
  string result;
  cin>>bedivd>>num;
  int remain;
  int among; 
  if(bedivd.size()==1){
    int temp=bedivd[0]-'0';
    remain=temp%num;
    among =temp/num;
    result.push_back(among+'0');
    cout<<result<<' '<<remain<<endl;
  }
  else{
    int temp=0;
    for(int i=0;i<bedivd.size();i++){
      temp=temp*10+bedivd[i]-'0';
      if(temp<num){
        result.push_back('0');
        continue;
      }
      else{
        among=temp/num;
        remain=temp%num;
        result.push_back(among+'0');
        temp=remain;
      }
    }
      if(result[0]!='0'){
        cout<<result<<" "<<remain<<endl;
      }
      else{
        for(int i=1;i<result.size();i++){
          cout<<result[i];
        }
        cout<<" "<<remain<<endl;
      }
    
  }

  return 0;
} 
