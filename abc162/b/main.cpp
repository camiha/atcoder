#include <bits/stdc++.h>
using namespace std;

long fizzbuzz(int i) {
  if (i % 3 == 0 || i % 5 == 0) {
    return 0;
  } else {
    return i;
  }
}

int main() { 
  int n,i;
  long total=0;
  cin >> n;

  for(i=0; i<=n; i++) {
    total += fizzbuzz(i);
  }

  cout << total << endl;
}
