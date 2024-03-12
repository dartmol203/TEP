#include <bits/stdc++.h>

using namespace std;

unsigned long long fast_exp(long long a, int n)
{
    if (n == 1)
        return a;

    auto x = fast_exp(a, n / 2);

    return x * x * (n % 2 ? a : 1);
}

int main()
{

    long long b;

    cin >> b;
    unsigned long long i = 1;

    unsigned long long x = fast_exp(i, i);
    while (x < b)
    {
        i++;
        x = fast_exp(i, i);
    }

    if (x == b)
    {
        cout << i << '\n';
    }
    else
    {
        cout << "-1\n";
    }
    return 0;
}