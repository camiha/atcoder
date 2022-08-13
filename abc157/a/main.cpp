#include <bits/stdc++.h>
using namespace std;

int main() { 
  int n;
  cin >> n;

  int num = n / 2;

  if(n % 2 == 1) {
    num++;
  }
  
  cout << num << endl;
}
