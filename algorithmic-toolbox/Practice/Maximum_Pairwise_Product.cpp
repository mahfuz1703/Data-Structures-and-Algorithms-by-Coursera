#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){

    int n; cin >> n;
    vector <ll> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    ll ans = v[n-1] * v[n-2];
    cout << ans << "\n";
    // cout << double(clock()) / CLOCKS_PER_SEC << "\n";
    return 0;
}