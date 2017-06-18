#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>
#include<functional>
using namespace std;
typedef struct people{
  int num;
  int vritue;
  int talent;
  bool  operator<(const  people&rhs) const   //升序排序时必须写的函数
  {
    if (vritue + talent!=rhs.vritue + rhs.talent){
      return vritue + talent>rhs.vritue + rhs.talent;
    }
    else{
      if (vritue != rhs.vritue)
        return vritue > rhs.vritue;
      else
        return num < rhs.num;
    }

  }
}People;
/*vector<People> otherline(vector<People> temp){
  for (int i = 0; i < temp.size();i++){
    int temp_all = temp[i].all;
    int count = 1;
    int j = i+1;
    int beg = j;
    for (; j < temp.size(); j++){
      if (temp[j].all == temp_all){
        count++;
      }
      else{
        
        break;
      }
    }
    if (count == 1){
      continue;
    }
    else{
      for (int t = beg-1; t < count+beg-1; t++){//t要指向temp.all相同的数的起始数的下标,开始排序
        for (int n = t+1; n <  count+beg-1; n++){
          if (temp[n].vritue > temp[t].vritue){
            People among= temp[n];
            temp[n] = temp[t];
            temp[t] = among;
          }
        }
        int CountSameAllAndVritue = 1;
        for (int t = beg - 1; t < count + beg - 1; t++){//已经对总分相同的情况进行排序
          int NextHaveSameALL=t+1;
          if (temp[t].vritue == temp[NextHaveSameALL].vritue){
            CountSameAllAndVritue++;
          }
          else{
            break;
          }
        }
        if (CountSameAllAndVritue != 1){
          for (int allsamebeg = beg - 1; allsamebeg < beg + CountSameAllAndVritue - 1; allsamebeg++){
            for (int allsameamong = beg; allsameamong < beg + CountSameAllAndVritue - 1; allsameamong++){
              if (temp[allsameamong].num<temp[allsamebeg].num){
                People among = temp[allsameamong];
                temp[allsameamong] = temp[allsamebeg];
                temp[allsamebeg] = among;
              }
            }
          }
        }
      }
      i = j;
    }
  }

  return temp;
}*/
int main(){
  int count;
  int low;
  int high;
  scanf("%d %d %d", &count,&low ,&high);
  vector<People> Frist;
  vector<People> Second;
  vector<People> Thrid;
  vector<People>Fourth;
  int d = 0;
  People *temp = new People;
  while (count--){
    scanf("%d %d %d", &temp->num , &temp->vritue , &temp->talent);
    if (temp->talent>=low&&temp->vritue>=low){
      d++;
      if (temp->vritue >= high && temp->talent >= high){//不低于
        Frist.push_back(*temp);//进入新的vector
      }
      else if (temp->vritue >= high&&temp->talent < high){
        Second.push_back(*temp);

      }
      else if (temp->vritue < high&&temp->talent < high&& temp->vritue >= temp->talent){
        Thrid.push_back(*temp);
      }
      else{
        Fourth.push_back(*temp);
      }
    }
  }
  sort(Frist.begin(),Frist.end());
  sort(Second.begin(), Second.end());
  sort(Thrid.begin(), Thrid.end());
  sort(Fourth.begin(), Fourth.end());
  /*Frist = otherline(Frist);
  Second = otherline(Second);
  Thrid = otherline(Thrid);
  Fourth = otherline(Fourth);*/
  printf("%d\n", d); 
  for (int i = 0; i < Frist.size(); i++){
    printf("%d %d %d\n", Frist[i].num, Frist[i].vritue, Frist[i].talent);
  }
  for (int i = 0; i < Second.size(); i++){
    printf("%d %d %d\n",Second[i].num ,Second[i].vritue,Second[i].talent );
  }
  for (int i = 0; i < Thrid.size(); i++){
    printf("%d %d %d\n", Thrid[i].num, Thrid[i].vritue, Thrid[i].talent);
  }
  for (int i = 0; i < Fourth.size(); i++){
    printf("%d %d %d\n",Fourth[i].num ,Fourth[i].vritue, Fourth[i].talent);
  }
  delete temp;
  return 0;
}
