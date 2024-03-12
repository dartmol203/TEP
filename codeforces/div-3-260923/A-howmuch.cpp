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

        int n, k, flag = 0;
        cin >> n >> k;

        for (int i = 0; i < n; i++)
        {
            int aux;
            cin >> aux;
            if (aux == k)
            {
                flag = 1;
            }
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}