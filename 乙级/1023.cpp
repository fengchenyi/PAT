#include<iostream>
#include<string>
#include<functional>
#include<algorithm>
using namespace std;
int main ()
{
  int hash[10]={0};
  int count=0;
  for(int i=0;i<10;i++){
    int temp=0;
    cin>>temp;
    hash[i]=temp;
    count=count+temp;
  }  
  int *num=new int[count];
  count=0;
  for(int i=0;i<10;i++){
    for(int t=0;t<hash[i];t++){
      num[count++]=i;
    }
  } 
  sort(num,num+count,less<int>());
  for(int i=0;i<count;){
    if(i==0&&num[i]!=0){
      break;
    }
    if(num[i]==0){
      i++;
      continue;
    }
    else if(i!=0&&num[i]!=0){
      num[0]=num[i];
      num[i]=0;
      break;
    }
  }
  for(int i=0;i<count;i++){
    cout<<num[i];
  }
  cout<<endl;
  return 0;
}
