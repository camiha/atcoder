#include <bits/stdc++.h>
using namespace std;

int main() { 
  long n, k, i;
  cin >> n >> k;

  for (i=0; i<k; i++) {
    if(n % 200 == 0) {
      n /= 200;
    } else {
      n = n * 1000 + 200;
    }
  }

  cout << n << endl;
}
