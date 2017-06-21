
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
int k;
int sign[100000];
int num;
int arr[100000];
int main()
{
    memset(sign,0,sizeof(sign));
    memset(arr,0,sizeof(arr));
    vector<int> container;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        cin>>num;
        arr[i]=num;
        while(num!=1)
        {
            if(num%2==0)
            {
                num/=2;
                sign[num]=1;
                continue;
            }
            else
            {
                num=(num*3+1)/2;
                sign[num]=1;
                continue;
            }
        }
    }
    for(int i=0;i<k;i++)
    {
        if(sign[arr[i]]==0)
            container.push_back(arr[i]);
    }
    sort(container.begin(),container.end());
    vector<int>::reverse_iterator p=container.rbegin();
    int s=0;
    for(;p!=container.rend();p++)
    {
        if(s!=0)
            cout<<" "<<*p;
        else
        {
            cout<<*p;
            s=1;
        }
    }
    cout<<endl;
    return 0;
}
