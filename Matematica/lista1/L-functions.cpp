#include <bits/stdc++.h>

using namespace std;

long long fun(long long n)
{
    if (n == 1)
    {
        return -1;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        if (n % 2 == 0)
        {
            return n / 2;
        }
        else
        {
            return ((n + 1) / 2) * -1;
        }
    }
}
int main()
{
    long long n;

    cin >> n;

    cout << fun(n) << endl;
    return 0;
}