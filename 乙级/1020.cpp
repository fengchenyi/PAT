#include<iostream>
#include<algorithm>
#include<functional>
#include<cstdio> 
using namespace std;
typedef struct yy{
      float have;
      float price;

    bool operator < (const yy & rhs)const{
    return (float(rhs.price)/float(rhs.have))<
         (float(price)/float(have));
    }
      
  }yuebing;
int main (){
    int kind=0;
    float need=0; 
    cin>>kind>>need;
    yuebing *all=new yuebing[kind];
    for(int i=0;i<kind;i++){
        cin>>all[i].have;
    }   
   for(int i=0;i<kind;i++){
        cin>>all[i].price;
    }  
  sort(all,all+kind,less<yuebing>());
  float remain=need;
  float value=0;
  for(int i=0;i<kind;i++){
    if(remain<all[i].have){  
      float percent=float(remain)/float(all[i].have);
      value +=percent*all[i].price;
      break;
    } 
    else{
      value+=all[i].price;
      remain=remain-all[i].have;  
    }
  }
  printf("%.2f\n",value);
    return 0;
}
