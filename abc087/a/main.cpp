#include <bits/stdc++.h>
using namespace std;

int main() { 
  int x,a,b;
  cin >> x >> a >> b;

  int price = (x - a) % b;
  cout << price << endl;
}
