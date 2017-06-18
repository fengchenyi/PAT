#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;
int main() {
  int count = 0;
  long long int p;
  vector<long long int> num;
  cin >> count >> p;
  long long int temp;
  long long int Max;
  while (count--) {
    cin >> temp;
    num.push_back(temp);
  }
  if (count == 1) {
    cout << 1<<endl;
    return 0;
  }
  sort(num.begin(), num.end());
  int result = 1;
  for (int i = 0; i<num.size()-result; i++) {
    long long int min = num[i];
    int j = i;
    for (; j<num.size(); j++){
      if (j==i) {
        j = j + result;
        j--;
      }
      if (min*p >= num[j]) {
        if (j - i >= result)
          result = j - i + 1;
      }
      else
        break;

    }
  }
  cout << result << endl;
  return 0;

}
