#include <bits/stdc++.h>

using namespace std;

int main()
{

    unordered_map<int, int> m;
    int n, i, q;

    cin >> n;

    for (int j = 0; j < n; j++)
    {
        cin >> i >> q;
        m.insert({i, q});
    }

    int p;
    cin >> p;
    for (int j = 0; j < p; j++)
    {
        cin >> i >> q;
        if (m[i] >= q)
        {
            m[i] -= q;
        }
        else
        {
            cout << "Nao\n";
            return 0;
        }
    }

    cout << "Sim\n";

    return 0;
}