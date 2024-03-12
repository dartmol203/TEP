#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()

using namespace std;
using ll = int64_t;
using pii = pair<int, int>;

ll ceil(ll a, ll b) { return a % b == 0 ? a / b : a / b + 1; }
vector<pii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<pii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

void __print(int x) { cerr << x; }
void __print(long x) { cerr << x; }
void __print(long long x) { cerr << x; }
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }

template <typename T, typename V>
void __print(const pair<T, V> &x)
{
    cerr << '{';
    __print(x.first);
    cerr << ", ";
    __print(x.second);
    cerr << '}';
}
template <typename T>
void __print(const T &x)
{
    int f = 0;
    cerr << '{';
    for (auto &i : x)
        cerr << (f++ ? ", " : ""), __print(i);
    cerr << "}";
}
void _print() { cerr << "]\n"; }
template <typename T, typename... V>
void _print(T t, V... v)
{
    __print(t);
    if (sizeof...(v))
        cerr << ", ";
    _print(v...);
}
#ifdef DEBUG
#define dbg(x...)                                                             \
    cerr << "\e[91m" << __func__ << ":" << __LINE__ << " [" << #x << "] = ["; \
    _print(x);                                                                \
    cerr << "\e[39m" << endl;
#else
#define dbg(x...)
#endif

void solve()
{

    double maxW = 1;
    priority_queue<pair<ll, pair<ll, ll>>> pq;
    ll n, m;
    cin >> n >> m;
    vector<vector<int>> vet(n, vector<int>(m));
    vector<vector<double>> agua(n, vector<double>(m, 1));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> vet[i][j];
            pq.push({vet[i][j], {i, j}});
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
            if (vet[x + 1][y] < h)
            {
                a = true;
            }
        }
        if (x - 1 >= 0)
        {
            if (vet[x - 1][y] < h)
            {
                b = true;
            }
        }
        if (y + 1 < m)
        {
            if (vet[x][y + 1] < h)
                c = true;
        }
        if (y - 1 >= 0)
        {
            if (vet[x + 1][y - 1] < h)
                d = true;
        }

        int div = a + b + c + d;
        double w = agua[x][y] / div;
        a ? agua[x + 1][y] += w : 1;
        b ? agua[x - 1][y] += w : 1;
        c ? agua[x][y + 1] += w : 1;
        d ? agua[x + 1][y - 1] += w : 1;
        agua[x][y] = 0;
        a ? maxW = max(maxW, agua[x + 1][y]) : 1;
        b ? maxW = max(maxW, agua[x - 1][y]) : 1;
        c ? maxW = max(maxW, agua[x][y + 1]) : 1;
        d ? maxW = max(maxW, agua[x][y - 1]) : 1;
    }

    cout << maxW << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    cout << "opa\n";
    solve();
    return 0;
}
