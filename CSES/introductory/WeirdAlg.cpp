#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long x;

    cin >> x;

    cout << x;

    while (x != 1)
    {
        // cout << "opa\n";
        if ((x & 1) == 0)
        {
            x /= 2;
            cout << ' ' << x;
        }
        else
        {
            x = x * 3 + 1;
            cout << ' ' << x;
        }
    }
    cout << endl;
    return 0;
}