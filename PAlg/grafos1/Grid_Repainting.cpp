#include <bits/stdc++.h>

using namespace std;
using ii = pair<int, int>;

int distancia[55][55];

int main()
{

    memset(distancia, -1, sizeof distancia);
    int H, W;

    cin >> H >> W;
    vector<string> s(H);

    for (int i = 0; i < H; i++)
    {
        cin >> s[i];
    }

    int brancos = 0;

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (s[i][j] == '.')
            {
                brancos++;
            }
        }
    }

    queue<ii> q;

    q.push({0, 0});

    distancia[0][0] = 1;

    while (!q.empty())
    {
        vector<ii> direcoes{{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
        int x = q.front().first, y = q.front().second;
        q.pop();

        if (x == H - 1 and y == W - 1)
            break;

        for (auto [dx, dy] : direcoes)
        {
            int u = x + dx, v = y + dy;
            if (u < 0 or u >= H or v < 0 or v >= W or distancia[u][v] > -1 or s[u][v] == '#')
                continue;

            distancia[u][v] = distancia[x][y] + 1;
            q.push({u, v});
        }
    }

    int res = distancia[H - 1][W - 1] == -1 ? -1 : brancos - distancia[H - 1][W - 1];
    cout << res << '\n';

    return 0;
}