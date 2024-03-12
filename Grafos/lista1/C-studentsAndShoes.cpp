#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<ll, ll>;

int main()
{
    int m, n;

    cin >> n >> m;
    long long adj[n + 1][n + 1]{0};

    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        adj[a][b] = 1;
        adj[b][a] = 1;
    }
    vector<int> toRemove;
    int total = 0;
    while (1)
    {

        toRemove = vector<int>();

        for (int i = 1; i <= n; i++)
        {
            int cont = 0;
            for (int j = 1; j <= n; j++)
            {
                cont += adj[i][j];
            }
            if (cont == 1)
            {
                toRemove.push_back(i);
            }
        }

        if (toRemove.empty())
            break;

        total++;

        for (auto x : toRemove)
        {
            for (int i = 1; i <= n; i++)
            {
                adj[x][i] = 0;
                adj[i][x] = 0;
            }
        }
    }

    cout << total << '\n';

    return 0;
}