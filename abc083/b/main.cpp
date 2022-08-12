#include <bits/stdc++.h>
using namespace std;


int calc_sum_digits(int N) {
  int sum_digit = 0;
  while (N > 0) {
    sum_digit += N % 10;
    N /= 10;
  }
  return sum_digit;
}

int main() { 
  int N, A, B;
  cin >> N >> A >> B;

  int total = 0, i;

  for(i=1; i<=N; i++) {
    int current = calc_sum_digits(i);

    if (A <= current && current <= B){
      total += i;
    }
  }

  cout << total << endl;
}
