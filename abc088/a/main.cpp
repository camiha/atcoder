#include <bits/stdc++.h>
using namespace std;

int main() { 
  int a, n;
  cin >> n;
  cin >> a;

  int sub = n % 500;

  if (sub > a) {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;
  return 0;
}
