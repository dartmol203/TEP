#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, good = 0, poor = 0;

    string s;
    cin >> n;

    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'o')
        {
            good++;
        }
        if (s[i] == 'x')
        {
            cout << "No\n";
            return 0;
        }
    }

    if (good != 0)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
    return 0;
}