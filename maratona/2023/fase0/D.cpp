#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()

using namespace std;
using ll = int64_t;
using ii = pair<int, int>;

ll ceil(ll a, ll b) { return a % b == 0 ? a / b : a / b + 1; }
vector<ii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<ii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

void solve()
{
    ll n;
    cin >> n;
    cout << n << "\n";
    while (n >= 7)
    {
        ll x = (n / 10) * 3 + (n % 10);
        if (x == n)
            break;
        cout << x << "\n";
        if (x % 7 != 0)
            break;
        n = x;
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--)
        solve();
    return 0;
}
