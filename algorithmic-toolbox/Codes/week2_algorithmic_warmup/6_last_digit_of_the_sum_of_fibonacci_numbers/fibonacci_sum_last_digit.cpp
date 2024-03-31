#include <bits/stdc++.h>
using namespace std;

int fibonacci_sum_naive(long long n) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;
    long long sum      = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current;
    }

    return sum % 10;
}


int fibonacci_sum_efficient(long long n){
    n = (n+2) % 60;
    int arr[n + 1];
    arr[0] = 0;
    arr[1] = 1;

    for(int i = 2; i <= n; i++){
        arr[i] = ((arr[i-1] % 10) + (arr[i-2]) % 10) % 10; 
    }
    if(arr[n] == 0) return 9;
    return arr[n] % 10 - 1;
}

int main() {
    long long n = 0;
    cin >> n;
    // cout << fibonacci_sum_naive(n) << "\n";
    cout << fibonacci_sum_efficient(n) << "\n";
}
