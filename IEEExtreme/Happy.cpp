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
    ll a, b;
    cin >> a >> b;
    ll happy = 0;
    map<ll, bool> memo;
    for (ll i = a; i <= b; i++)
    {
        queue<ll> q;
        ll cur = i;
        set<ll> nums;
        while (cur != 1 and nums.count(cur) == 0)
        {
            q.push(cur);
            if (memo.count(cur))
            {
                cur = memo[cur];
                break;
            }
            nums.insert(cur);
            ll x = 0;
            while (cur)
            {
                ll y = cur % 10;
                x += y * y;
                cur /= 10;
            }
            cur = x;
        }
        if (cur == 1)
        {

            while (!q.empty())
            {
                memo[q.front()] = 1;
                cout << q.front() << ' ';
                q.pop();
            }
            cout << "\n\n";
            happy++;
        }
        else
        {
            memo[i] = 0;
        }
    }
    cout << happy << "\n";
    for (int i = a; i <= b; i++)
    {
        cout << memo[i] << ' ';
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
