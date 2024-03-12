#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;

    cin >> t;

    while (t--)
    {
        int l, r, flag = 0;

        cin >> l >> r;

        for (int i = 2; i < r; i++)
        {
            if (flag)
            {
                break;
            }
            for (int j = max(l - i, 2); j < r; j++)
            {
                if (i + j > r)
                {
                    break;
                }
                if (i + j >= l and i + j <= r and __gcd(i, j) != 1)
                {
                    cout << i << ' ' << j << '\n';
                    flag = 1;
                    break;
                }
            }
        }
        if (!flag)
        {
            cout << -1 << '\n';
        }
    }

    return 0;
}