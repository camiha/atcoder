#include <bits/stdc++.h>
using namespace std;

int main() { 
  string S;
  int a, b;
  cin >> S;
  cin >> a >> b;

  char temp = S[a];
  S[a] = S[b];
  S[b] = S[a];
  
  cout << S << endl;
}
