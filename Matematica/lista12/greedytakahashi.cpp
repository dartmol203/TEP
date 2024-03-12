#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long a, b, k;

    cin >> a >> b >> k;

    if (k > a)
    {
        k -= a;
        a = 0;
    }
    else
    {
        a -= k;
        k = 0;
    }

    if (k > b)
    {
        k -= b;
        b = 0;
    }
    else
    {
        b -= k;
    }
    cout << a << ' ' << b << '\n';
    return 0;
}