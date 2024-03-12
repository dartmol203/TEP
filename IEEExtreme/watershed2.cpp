#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main()
{

    double maxW = 1;
    priority_queue<pair<int, pair<int, int>>> pq;
    int n, m;
    cin >> n >> m;
    vector<vector<int>> vec(n, vector<int>(m));
    vector<vector<double>> agua(n, vector<double>(m, 1));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> vec[i][j];
            agua[i][j] = 1;
            pq.push({vec[i][j], {i, j}});
        }
    }

    while (!pq.empty())
    {
        auto aux = pq.top();
        pq.pop();
        long long x = aux.second.first, y = aux.second.second, h = aux.first;
        int a = false, b = false, c = false, d = false;
        if (x + 1 < n)
        {
            if (vec[x + 1][y] < h)
            {
                a = true;
            }
        }
        if (x - 1 >= 0)
        {
            if (vec[x - 1][y] < h)
            {
                b = true;
            }
        }
        if (y + 1 < m)
        {
            if (vec[x][y + 1] < h)
                c = true;
        }
        if (y - 1 >= 0)
        {
            if (vec[x][y - 1] < h)
                d = true;
        }

        // cout << "opa opa\n";
        int div = a + b + c + d;
        double w = agua[x][y] / div;
        a ? agua[x + 1][y] += w : 1;
        b ? agua[x - 1][y] += w : 1;
        c ? agua[x][y + 1] += w : 1;
        d ? agua[x][y - 1] += w : 1;
        agua[x][y] = 0;
        a ? maxW = max(maxW, agua[x + 1][y]) : 1;
        b ? maxW = max(maxW, agua[x - 1][y]) : 1;
        c ? maxW = max(maxW, agua[x][y + 1]) : 1;
        d ? maxW = max(maxW, agua[x][y - 1]) : 1;
    }

    cout << maxW << '\n';
    return 0;
}