#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;

    cin >> t;

    while (t--)
    {
        long long n, w;

        cin >> n >> w;
        // cout << n << ' ' << w << endl;

        vector<long long> v(n);
        long long mini = LONG_LONG_MAX;

        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
            mini = min(mini, v[i]);
            // cout << '\t' << i << endl;
        }

        long long ans = mini, wused2 = 0, wused1;

        if (n == 1)
        {
            ans = v[0] + w;
        }
        else
        {

            while (wused2 <= w)
            {
                wused2 = 0;
                // cout << "opa\n";
                // cout << '\t' << wused1 << ' ' << wused2 << ' ' << ans << endl;
                // cout << ans << "\n\t";
                for (long long i = 0; i < n; i++)
                {
                    wused2 += max(0LL, (ans + 1) - v[i]);
                    // cout << wused2 << ' ';
                    if (wused2 > w)
                    {
                        wused2 = LONG_LONG_MAX;
                        break;
                    }
                }
                // cout << '\n';
                if (wused2 <= w)
                {
                    ans++;
                    wused1 = wused2;
                }
                else
                {
                    break;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}