#include <bits/stdc++.h>
using namespace std;

int main() { 
  int n;
  cin >> n;

  int price = n * 1.08;
  
  if(price < 206) {
    cout << "Yay!" << endl;
  } else if(price > 206) {
    cout << ":(" << endl;
  } else {
    cout << "so-so" << endl;
  }
}
