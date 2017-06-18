#include<iostream>
using namespace std;
struct test{
    long long int a;
    long long int b;
    long long int c;
};
int main (){
      int count;
      cin>>count;
      struct test *have=new struct test[count];
      for(int i=0;i<count;i++){
        cin>>have[i].a>>have[i].b>>have[i].c;
    }
      for(int j=1;j<=count;j++){
        if(have[j-1].a+have[j-1].b>have[j-1].c){
          cout<<"Case #"<<j<<": true"<<endl;
      }
      else{
        cout<<"Case #"<<j<<": false"<<endl;
      }
    }
          
      return 0;
  }
