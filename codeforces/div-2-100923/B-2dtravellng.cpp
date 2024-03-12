#include <bits/stdc++.h>

using namespace std;

using ii = pair<long long, long long>;

vector<long long> dijkstra(int s, int N, vector<ii> adj[])
{
    const long long oo{__LONG_LONG_MAX__};

    vector<long long> dist(N + 1, oo);
    dist[s] = 0;

    set<ii> U;
    U.emplace(0, s);

    while (not U.empty())
    {
        auto [d, u] = *U.begin();
        U.erase(U.begin());

        for (auto [v, w] : adj[u])
        {
            if (dist[v] > d + w)
            {
                if (U.count(ii(dist[v], v)))
                    U.erase(ii(dist[v], v));

                dist[v] = d + w;
                U.emplace(dist[v], v);
            }
        }
    }

    return dist;
}

int main()
{

    int t;

    cin >> t;

    while (t--)
    {
        long long n, k, a, b;

        cin >> n >> k >> a >> b;
        vector<pair<long long, long long>> v(n + 1);
        // cout << "opa\n";
        vector<ii> adj[n + 1];
        for (long long i = 0; i <= n; i++)
        {
            adj[i].clear();
        }
        // cout << "opa2\n";
        for (long long i = 1; i <= n; i++)
        {
            cin >> v[i].first >> v[i].second;
        }

        for (long long i = 1; i <= n; i++)
        {
            for (long long j = 1; j <= n; j++)
            {
                if (i == j or (i <= k and j <= k))
                {
                    adj[i].push_back(ii(j, 0));
                    adj[j].push_back(ii(i, 0));
                }
                else
                {
                    adj[i].push_back(ii(j, abs(v[i].first - v[j].first) + abs(v[i].second - v[j].second)));
                    adj[j].push_back(ii(i, abs(v[i].first - v[j].first) + abs(v[i].second - v[j].second)));
                }
            }
        }

        auto x = dijkstra(a, n, adj);

        cout << x[b] << '\n';
    }

    return 0;
}