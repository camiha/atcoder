#include <bits/stdc++.h>
using namespace std;

int main() { 
  int n,totalPrice=0,todaySave=0,day=0;
  cin >> n;

  while(n > totalPrice){
    todaySave++;   
    totalPrice += todaySave;
    day++;
  }


  cout << day << endl;
}
