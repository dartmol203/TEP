#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    long long n;

    cin >> t;
    while (t--)
    {
        cin >> n;
        while ((n & 1) == 0)
        {
            n = n >> 1;
        }
        if (n == 1)
        {

            cout << "No\n";
        }
        else
        {

            cout << "Yes\n";
        }
    }

    return 0;
}