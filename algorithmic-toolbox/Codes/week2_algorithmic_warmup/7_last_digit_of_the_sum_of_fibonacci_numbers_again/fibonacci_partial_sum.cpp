#include <iostream>
#include <vector>
#define ll long long
using std::vector;

long long get_fibonacci_partial_sum_naive(long long from, long long to) {
    long long sum = 0;

    long long current = 0;
    long long next  = 1;

    for (long long i = 0; i <= to; ++i) {
        if (i >= from) {
            sum += current;
        }

        long long new_current = next;
        next = next + current;
        current = new_current;
    }

    return sum % 10;
}

ll get_fibonacci_partial_sum_efficient(ll from, ll to){
    vector<ll> arr(60);
    arr[0] = 0;
    arr[1] = 1;

    for(int i = 2; i < 60; i++){
        arr[i] = arr[i-1] + arr[i-2]; 
    }

    from %= 60;
    to %= 60;

    if (to < from) to += 60;
    
    ll sum = 0;
    for(int i = from; i < to + 1; i++){
        sum += arr[i % 60];
    }
    return sum % 10;
}

int main() {
    long long from, to;
    std::cin >> from >> to;
    // std::cout << get_fibonacci_partial_sum_naive(from, to) << '\n';
    std::cout << get_fibonacci_partial_sum_efficient(from, to) << "\n";
}
