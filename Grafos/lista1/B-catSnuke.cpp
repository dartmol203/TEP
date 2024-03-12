#include <bits/stdc++.h>

using namespace std;
vector<long long> adj[200010];

vector<long long> bfs(long long s, long long N)
{
    vector<long long> dist(N + 1, LONG_LONG_MAX);
    queue<long long> q;

    dist[s] = 0;
    q.push(s);

    while (not q.empty())
    {
        auto u = q.front();
        q.pop();

        // visita/processa u

        for (auto v : adj[u])
        {
            if (dist[v] == LONG_LONG_MAX)
            {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }

    return dist;
}
int main()
{

    long long n, m;

    cin >> n >> m;
    for (long long i = 0; i < m; i++)
    {
        int a, b;

        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    auto vet = bfs(1, n);

    cout << (vet[n] == 2 ? "POSSIBLE\n" : "IMPOSSIBLE\n");
    return 0;
}