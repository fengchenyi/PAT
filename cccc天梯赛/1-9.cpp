#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<cmath>
using namespace std;
long int cal(long int m, long int n){
  long int a = m;
  long int b = n;
  if (m < n){
    long int t = m;
    m = n;
    n = t;
  }
  long int r = 1;
  while ((r = m%n) != 0){
    m = n;
    n = r;
  }
  return a*b / n;
}
long int cal(long int m, long int n, string temp){
  long int a = m;
  long int b = n;
  if (m < n){
    long int t = m;
    m = n;
    n = t;
  }
  long int r = 1;
  while ((r = m%n) != 0){
    m = n;
    n = r;
  }
  return n;
}
long int GCD(vector<long int> have){
  stack<long int> test;
  for (int i = 0; i < have.size(); i++){
    test.push(have[i]);
    if (test.size() == 2){
      long int a = test.top();
      test.pop();
      long int b = test.top();
      test.pop();
      test.push(cal(a, b));
    }
  }
  return test.top();
}
int judgepostive(long int a,long int b){
  if (a / b >= 0)
    return 1;
  else
    return 0;
}
int main(){
  int count;
  cin >> count;
  long int gcd;
  vector<long int> numerato;//分子
  vector<long int> denominator;//分母
  for (int i = 0; i < count; i++){
    long int a;
    long int b;
    char c;
    cin >> a >> c >> b;
    numerato.push_back(a);
    denominator.push_back(b);
  }
  gcd = GCD(denominator);//最大公倍数
  for (int i = 0; i < numerato.size(); i++){
    long int multiples = gcd / denominator[i];
    numerato[i] = numerato[i] * multiples;
  }
  long int numerResult = 0;
  for (int j = 0; j < numerato.size(); j++){
    numerResult += numerato[j];
  }
  if (numerResult == 0){
    cout << '0';
    return 0;
  }
  long int result_gcb = cal(numerResult, gcd, "gcb");//最小公约数计算
  if (result_gcb<0)
    result_gcb *= -1;
  numerResult /= result_gcb;
  long int denominResult = gcd / result_gcb;
  int flag = 1;
  flag = judgepostive(numerResult, denominResult);
  int abs_num = abs(numerResult);
  int abs_den = abs(denominResult);
  if (abs_num >abs_den){//分子大于分母的情况
    int out = 0;
    if (abs_num%abs_den == 0){
      if (flag == 0)
        cout << (-1 * (abs_num / abs_den)) << endl;
      else
        cout << (abs_num / abs_den) << endl;
    }
    else{
      
      while ( abs_num>abs_den ){
        abs_num -= abs_den;
        out++;
      }
      if (flag == 0){
        abs_num *= -1;
      }
      if (abs_num == 0){
        cout << out << endl;
      }
      else
        cout << out << " " << abs_num << "/" << abs_den << endl;
    }
  }
  else if (abs_den == abs_num){
    if (flag == 0){
      cout << -1 * abs_num / abs_den << endl;
    }
    else
      cout << abs_num / abs_den << endl;
  }
  else{
    cout << numerResult << "/" << denominResult << endl;
  }
  getchar();
  getchar();
  return 0;

}
