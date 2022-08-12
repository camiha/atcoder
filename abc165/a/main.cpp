#include <bits/stdc++.h>
using namespace std;

int main() { 
  int A, B ,K;
  int i;
  string flag = "NG";

  cin >> K;
  cin >> A >> B;

  for(i=A; i<=B; i++) {
    if(i % K == 0) {
      flag = "OK";
      break;
    }
  }

  cout << flag << endl;
}
