#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;

    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<pair<int, int>> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first >> v[i].second;
        }

        sort(v.begin(), v.end());

        int last, max;
        last = v[0].first;
        max = v[0].first + ((v[0].second - 1) / 2);

        // for (int i = 0; i < n; i++)
        //{
        //  cout << v[i].first << ' ' << v[i].second << '\n';
        //}
        // cout << '\t' << max << '\n';
        for (int i = 1; i < n; i++)
        {

            if (v[i].first > max)
            {
                break;
            }
            // cout << i << '\t' << max << ' ' << v[i].first + ((v[0].second - 1) / 2) << '\n';

            if (v[i].first + ((v[i].second - 1) / 2) < max)
            {
                max = v[i].first + ((v[i].second - 1) / 2);
            }
        }

        cout << max << endl;
    }

    return 0;
}