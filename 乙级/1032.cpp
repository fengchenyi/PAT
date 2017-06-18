#include<iostream>
#include<vector>
using namespace std;
int main (){
    int count=0;
    cin>>count;
            if (count==0){
            cout<<"0 0"<<endl;
              return 0;
            }
            vector<int> sroce;
            sroce.resize(count);
        for(int i=0;i<count;i++){
              int t=0;
         int num;
     cin>>t>>num;
     sroce[t]+=num;
            }
    int max=sroce[1]; 
    int maxnum=1;
    for(int j=0;j<count;j++){
        if(sroce[j]>max){
            max=sroce[j];
                    maxnum=j;
        }
    }
            cout<<maxnum<<" "<<sroce[maxnum]<<endl;
    return 0;
}
