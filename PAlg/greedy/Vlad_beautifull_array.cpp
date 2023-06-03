#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;

    cin >> t;

    while (t--)
    {
        int n, qntpar = 0;
        cin >> n;

        vector<long long> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if ((v[i] & 1) == 0)
            {
                qntpar++;
            }
        }

        if (qntpar == 0 or qntpar == n)
        {
            cout << "YES\n";
        }
        else
        {
            sort(v.begin(), v.end());
            if ((v[0] & 1) == 1)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}