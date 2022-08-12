#include <bits/stdc++.h>
using namespace std;

int main() { 
  int H, A;
  int counter = 0;
  cin >> H >> A;

  while(H > 0){
    counter++;
    H = H - A;
  }

  cout << counter << endl;
}
