#include <bits/stdc++.h>
using namespace std;

int main() { 
  int n;
  cin >> n;
  
  int num = n % 1000;

  if(num > 0) {
    num = 1000 - num;
  }

  cout << num << endl;
}
