#include <bits/stdc++.h>
using namespace std;


int max(int a, int b) {
  if (a > b) {
    return a;
  }
  return b;
}

int main() { 
  int a,b;
  cin >> a >> b;

  int add = a+b;
  int sub = a-b;
  int mul = a*b;

  int maxNum = max(add,sub);
  maxNum = max(maxNum, mul);

  cout << maxNum << endl;
}
