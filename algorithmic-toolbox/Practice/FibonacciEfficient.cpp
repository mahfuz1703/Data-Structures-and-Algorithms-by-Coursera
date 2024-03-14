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

const int mx = 1e5;
int arr[mx];
int fibonacciEfficient(int n){
    arr[0] = 0;
    arr[1] = 1;
    for(int i = 2; i <= n; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    return arr[n];
}
int main(){
    FASTER

    int n; cin >> n;
    int ans = fibonacciEfficient(n);
    cout << ans << "\n";
    return 0;
}

/// Alhamdulilla for everything