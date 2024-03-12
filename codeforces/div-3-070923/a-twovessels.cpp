#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a, b, c, t, x;

    cin >> t;

    while (t--)
    {
        cin >> a >> b >> c;
        x = (a + b) / 2;
        if ((max(a, b) - x) % c == 0)
        {

            cout << (max(a, b) - x) / c << '\n';
        }
        else
        {
            cout << ((max(a, b) - x) / c) + 1 << '\n';
        }
    }

    return 0;
}