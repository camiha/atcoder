#include <iostream>
#include <string>
using namespace std;

int main() { 
  string S;
  int a, b;
  cin >> S;
  cin >> a >> b;

  char temp = S[a-1];
  S[a-1] = S[b-1];
  S[b-1] = temp;
  
  cout << S << endl;
}
