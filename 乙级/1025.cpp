#include<iostream>
#include<list>
#include<vector> 
#include<string>
#include<cstdio>
using namespace std;
typedef struct ss {
  int address;
  int data;
  int next;
}AIM;
int main() {
  int beg;
  int K;
  int count;
  cin >> beg >>  count >> K;
  vector<AIM> first(100005);
  vector<AIM> besorted;
  vector<AIM> end;
  AIM temp;
  for (int i = 0; i<count; i++) {
    scanf("%d %d %d",&temp.address, &temp.data,&temp.next);
    first[temp.address]=temp;
  }
  while (beg != -1) {
    besorted.push_back(first[beg]);
    beg = first[beg].next;
  }
  int times = besorted.size() / K;
  for (int i = 1; i <= times; i++) {
    for (int j = K*i-1; j >= K*(i - 1); j--) {
      end.push_back(besorted[j]);
    }
  }
  int t = times*K;
  for (; t < besorted.size(); t++) {
    end.push_back(besorted[t]);
  }
  int i;
  for ( i= 0; i < end.size()-1; i++) {//除去最后一个
    end[i].next = end[i + 1].address;
  }
  for (int t = 0; t < end.size(); t++) {
    if (t != end.size() - 1)
      printf("%05d %d %05d\n", end[t].address, end[t].data, end[t].next);
    else
      printf("%05d %d -1\n", end[t].address ,end[t].data);
  }
  return 0;
}
