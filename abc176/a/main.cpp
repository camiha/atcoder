#include <bits/stdc++.h>
using namespace std;

int main() { 
  int n, x, t; 
  cin >> n >> x >> t;

  int time = n / x * t;

  if(n % x > 0) {
    time += t;
  }

  cout << time << endl;
}
