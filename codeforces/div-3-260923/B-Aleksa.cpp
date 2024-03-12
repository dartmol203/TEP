#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<ll, ll>;

vector<int> adj[100010];

int main()
{
    int t;

    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cout << 2 * i + 1 << ' ';
        }
        cout << '\n';
    }
    return 0;
}