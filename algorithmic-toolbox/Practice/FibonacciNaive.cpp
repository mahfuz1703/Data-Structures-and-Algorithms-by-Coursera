/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define pb push_back
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define MOD 1000000007
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(x) cout << x << "\n"

ll fiboNaive(ll n){
    if(n <= 1)
        return n;
    else
        return fiboNaive(n-1) + fiboNaive(n-2);
}
int main(){
    FASTER

    ll n; cin >> n;
    cout << fiboNaive(n) << "\n";
    return 0;
}

/// Alhamdulilla for everything