#include <bits/stdc++.h>
using namespace std;

int main() { 
  int h, w;
  cin >> h >> w;
  
  if(h == 1 || w == 1) {
    cout << w * h << endl;
    return 0;
  }

  int width = w / 2;
  if(w % 2 == 1) {
    width++;
  }
  
  int height = h / 2;
  if(h % 2 == 1) {
    height++;
  }

  cout << width * height << endl;
}
