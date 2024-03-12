#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main()
{

    int n;

    cin >> n;

    map<string, int> m;
    set<pair<string, string>> s;
    for (int i = 0; i < n; i++)
    {
        char op[3], a[6], b[6];

        cin >> a >> op >> b;
        // cout << "opa\n";

        // cout << a << ' ' << op << ' ' << b << '\n';

        if (op[0] == '-')
        {
            m[b]++;
        }

        s.insert({a, b});
    }
    set<string> ans;
    for (auto i : s)
    {
        if (m[i.first] == 0)
        {
            ans.insert(i.first);
        }

        if (m[i.second] == 0 and m[i.first] == 0)
        {
            ans.insert(i.second);
        }
    }

    for (auto i : ans)
    {
        cout << i << '\n';
    }
    return 0;
}