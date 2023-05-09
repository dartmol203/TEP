#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;

    cin >> n;

    vector<int> love(n + 10);

    // cout << "opa\n";

    for (int i = 1; i <= n; i++)
    {
        cin >> love[i];
    }

    for (int i = 1; i <= n; i++)
    {
        int b = love[i];
        int C = love[b];

        if (i == love[C])
        {

            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";

    return 0;
}