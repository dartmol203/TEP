#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;

    cin >> t;

    while (t--)
    {
        int n, k;
        string s;
        cin >> n >> k;
        cin >> s;

        vector<int> va(n + 1, 0), vb(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            if (s[i - 1] == 'B')
            {
                vb[i] = vb[i - 1] + 1;
            }
            else
            {
                vb[i] = vb[i - 1];
            }
            if (s[i - 1] == 'A')
            {
                va[i] = va[i - 1] + 1;
            }
            else
            {
                va[i] = va[i - 1];
            }
            // cout << vb[i] << ' ';
        }
        if (vb[n] == k)
        {
            cout << 0 << '\n';
        }
        else
        {
            cout << "1\n";
        }
        // cout << vb[n] << ' ' << k << ' ' << n << '\n';
        if (vb[n] < k)
        {
            // cout << "\t opa1\n";
            for (int i = 1; i <= n; i++)
            {
                if (va[i] + vb[n] == k)
                {
                    cout << i << ' ' << "B\n";
                    goto l1;
                }
            }
        }
        if (vb[n] > k)
        {
            // cout << "\t opa2\n";
            for (int i = 1; i <= n; i++)
            {
                // cout << "\t\t" << i << ' ' << vb[n] - vb[i] << '\n';
                if (vb[n] - vb[i] == k)
                {
                    cout << i << ' ' << "A\n";
                    goto l1;
                }
            }
        }

    l1:
        vb[0] = 1;
    }

    return 0;
}