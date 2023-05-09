#include <bits/stdc++.h>

using namespace std;
using ii = pair<int, int>;

const vector<ii> diag{{1, 1}, {-1, -1}, {-1, 1}, {1, -1}};
int H, W;

auto solve(const vector<string> &vet)
{
    vector<int> ans(min(H, W) + 1, 0);

    vector<vector<int>> encontrado(H, vector<int>(W, 0));

    for (int i = 0; i < H; ++i)
        for (int j = 0; j < W; ++j)
        {
            if (encontrado[i][j] or vet[i][j] == '.')
                continue;

            encontrado[i][j] = 1;
            auto count = 1;

            queue<ii> q;
            q.push(ii(i, j));

            while (not q.empty())
            {
                auto [x, y] = q.front();
                q.pop();

                for (auto [dx, dy] : diag)
                {
                    auto u = x + dx, v = y + dy;

                    if (0 <= u and u < H and 0 <= v and v < W and vet[u][v] == '#' and not encontrado[u][v])
                    {
                        ++count;
                        encontrado[u][v] = 1;
                        q.push(ii(u, v));
                    }
                }
            }

            auto size = (count - 1) / 4;
            ans[size]++;
        }

    return ans;
}

int main()
{

    cin >> H >> W;

    vector<string> vet(H);

    for (int i = 0; i < H; ++i)
        cin >> vet[i];

    auto ans = solve(vet);

    for (size_t i = 1; i < ans.size(); ++i)
        cout << ans[i] << (i + 1 == ans.size() ? '\n' : ' ');

    return 0;
}