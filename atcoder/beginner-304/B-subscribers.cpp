#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;

    cin >> n;

    int count = 0;
    while (n > 1000 - 1)
    {
        n /= 10;
        count++;
    }

    while (count--)
    {
        n *= 10;
    }

    cout << n << endl;
    return 0;
}