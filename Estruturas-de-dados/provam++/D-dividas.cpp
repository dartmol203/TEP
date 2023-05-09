#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<pair<int, int>> v, v2;

    int n, m, c, d;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> c;
        v.push_back({c, i});
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < m; i++)
    {
        cin >> c;
        v2.push_back({c, i});
    }

    sort(v2.begin(), v2.end());
    int qnt = 0;
    vector<pair<int, int>> r;
    for (int i = m - 1; i >= 0; i--)
    {
        for (int j = v.size() - 1; j >= 0; j--)
        {
            if (v[j].first >= v2[i].first)
            {
                // cout << '\t' << v[j].first << ' ' << v2[i].first << '\n';
                qnt++;
                r.push_back(make_pair(v[j].second, v2[i].second));
                v.erase(v.begin() + j);
                d = 2;
                break;
            }
        }
    }

    cout << qnt << '\n';
    for (int i = 0; i < qnt; i++)
    {
        cout << r[i].first + 1 << ' ' << r[i].second + 1 << endl;
    }

    return 0;
}