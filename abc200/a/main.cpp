#include <bits/stdc++.h>
using namespace std;

int main() { 
  int n,i;
  cin >> n;

  int result = n / 100;

  if (n % 100 > 0) {
    result++;
  }

  cout << result << endl;
}
