#include <bits/stdc++.h>
using namespace std;
#define ll long long

int gcd_naive(int a, int b) {
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}

ll gcd_efficient(ll a, ll b){
  if(b == 0) return a;

  return gcd_efficient(b, a % b);
}

int main() {
  ll a, b;
  cin >> a >> b;
  // cout << gcd_naive(a, b) << endl;
  cout << gcd_efficient(a, b) << "\n";
  return 0;
}
