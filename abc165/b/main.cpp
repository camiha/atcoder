#include <bits/stdc++.h>
using namespace std;

int main() { 
  long long x;
  cin >> x;

  long price = 100;
  int year=0;

  while(x > price){
    price = price + price / 100;
    year++;
  }
  
  cout << year << endl;
}
