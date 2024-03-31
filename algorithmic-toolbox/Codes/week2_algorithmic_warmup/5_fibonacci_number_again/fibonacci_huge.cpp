#include <bits/stdc++.h>
using namespace std;
#define ll long long

// long long get_fibonacci_huge_naive(long long n, long long m) {
//     if (n <= 1)
//         return n;

//     long long previous = 0;
//     long long current  = 1;

//     for (long long i = 0; i < n - 1; ++i) {
//         long long tmp_previous = previous;
//         previous = current;
//         current = tmp_previous + current;
//     }

//     return current % m;
// }

ll fibonacciEfficient(ll n , ll m){
    if (n <= 1)
        return n;

    ll beforePrevious  = 0, previous = 1, a = -1, b = -1;

    for (ll i = 2; i <= n; i++) {
        b = (beforePrevious + previous) % m;

        if (a == 0 && b == 1) 
        {
            ll period = (i + 1) - 2;
            ll res = n % period;
            return fibonacciEfficient(res , m);
        }
        else{
            a = b;
            beforePrevious = previous;
            previous = b;
        }
    }
    return b;
}

int main() {
    ll n, m;
    cin >> n >> m;
    // cout << get_fibonacci_huge_naive(n, m) << '\n';
    cout << fibonacciEfficient(n, m) << "\n";
    return 0;
}
