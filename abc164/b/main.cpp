#include <bits/stdc++.h>
using namespace std;

int main() { 
  int a,b,c,d;
  cin >> a >> b >> c >> d;

  while(1) {
    c -= b;
    if(0 >= c) {
      cout << "Yes" << endl;
      break;
    }
    a -= d;
    if(0 >= a) {
      cout << "No" << endl;
      break;
    }
  }
}
