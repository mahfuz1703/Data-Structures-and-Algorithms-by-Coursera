#include <bits/stdc++.h>
using namespace std;

int gcd_efficient(int a, int b){ // complexity - O(log(a*b))
    if(b == 0) return a;

    return gcd_efficient(b, a%b);
}

int main(){
    int a, b; cin >> a >> b;

    int ans = gcd_efficient(a, b);
    cout << ans << "\n";
}