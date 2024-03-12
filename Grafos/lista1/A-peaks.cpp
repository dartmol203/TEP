#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<ll, ll>;

vector<int> adj[100010];

int main()
{

    int n, m, ans = 0;

    cin >> n >> m;

    vector<int> hs(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> hs[i];
    }

    for (int i = 0; i < m; i++)
    {
        int a, b;

        cin >> a >> b;
        // cout << a << ' ' << b << '\n';
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 1; i <= n; i++)
    {
        int flag = 0;
        for (int j = 0; j < adj[i].size(); j++)
        {
            // cout << i << ' ' << adj[i][j] << ' ' << ans << endl;
            // cout << '\t' << hs[i] << ' ' << hs[adj[i][j]] << endl;
            if (hs[i] <= hs[adj[i][j]])
            {
                flag = 1;
                break;
            }
        }
        if (!flag)
        {
            ans++;
        }
    }

    cout << ans << '\n';
    return 0;
}