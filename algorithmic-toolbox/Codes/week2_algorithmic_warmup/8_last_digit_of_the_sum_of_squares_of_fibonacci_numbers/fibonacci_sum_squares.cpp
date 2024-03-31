#include <bits/stdc++.h>
#define ll long long

int fibonacci_sum_squares_naive(long long n)
{
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current = 1;
    long long sum = 1;

    for (long long i = 0; i < n - 1; ++i)
    {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current * current;
    }

    return sum % 10;
}

int fibonacci_sum_squares_efficient(ll num)
{
    int pre = 0, cur = 1;
    num = num % 60;
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        for (int i = 2; i <= num; i++)
        {
            int temp = (pre + cur) % 60;
            pre = cur;
            cur = temp;
            // cout<<pre<<"\n"<<cur<<"\n";
        }
    }

    return (cur);
}

int main()
{
    ll n = 0;
    std::cin >> n;
    // std::cout << fibonacci_sum_squares_naive(n) << "\n";
    int a = fibonacci_sum_squares_efficient(n);
    int b = fibonacci_sum_squares_efficient(n+1);
    std::cout << (a * b) % 10 << "\n";
}
