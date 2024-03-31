#include <bits/stdc++.h>
using namespace std;

int gcd_naive(int a, int b){
    int current_gcd = 1;
    for(int d = 2; d <= a and d <= b; d++){
        if(a % d == 0 and b % d == 0){
            current_gcd = max(current_gcd, d);
        }
    }
    return current_gcd;
}

int main(){
    int a, b; cin >> a >> b;

    int ans = gcd_naive(a, b);
    cout << ans << "\n";
}