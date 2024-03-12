#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m, qnt, a1, b1, a2 = 0, b2 = 1000, ans;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> qnt;
        a1 = qnt / m;
        b1 = qnt % m;
        if (b1 < b2)
        {
            a2 = a1;
            b2 = b1;
            ans = qnt;
        }
        if (b2 == b1)
        {
            if (a1 > a2)
            {
                a2 = a1;
                b2 = b1;
                ans = qnt;
            }
        }
    }

    cout << ans << '\n';
    return 0;
}