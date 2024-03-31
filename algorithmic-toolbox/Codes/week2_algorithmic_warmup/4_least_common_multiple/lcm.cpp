#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
}


ll gcd_efficient(ll a, ll b){
  if(b == 0) return a;

  return gcd_efficient(b, a % b);
}
ll lcm_efficient(ll a, ll b){
  return (a / gcd_efficient(a, b)) * b;
}

int main() {
  ll a, b;
  cin >> a >> b;
  // cout << lcm_naive(a, b) << endl;
  cout << lcm_efficient(a, b) << "\n";
  return 0;
}
