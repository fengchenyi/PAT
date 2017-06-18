#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

vector<long long int> resolve(long long int x, vector<long long int> num, int &max)
{
  int flag = 1;
  int i = 2;
  for (; i <= sqrt(x); i++)
  {
    int beg_num = i;
    int temp = x;
    int count = 0;//记录当前最大
    int VecCount = 0;
    while (flag == 1){
      
      if (temp % beg_num == 0){
        count++;
        temp = temp / beg_num;
      }
      else{
        flag = 0;//若已不是连续因子,结束该while循环
        if (count > max){
          num.clear();
          num.resize(count);
          max = count;
          int give = --beg_num;
          for (; VecCount < count; VecCount++){
            num[VecCount] = beg_num--;
          }
          VecCount = 0;
        }
      }
      beg_num++;
    }
    flag = 1;
  }
  if (num[0] == 0){
    max = 1;
    num.resize(1);
    num[0] = x;
  }
  return num;
}

int  main()
{
    int max = 0;
  long long int  a;
  cin >> a;
  vector<long long int> num;
  num.resize(50);
  num = resolve(a, num, max);
  vector<long long int> ::iterator it;
    it = num.end() - 1;
    cout << max << endl;
    for (; it != num.begin(); it--){
      cout << *it << "*";
    }
    it = num.begin();
    cout << *it;

  cout << endl;
  return 0;
}
