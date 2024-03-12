#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;

    cin >> t;

    while (t--)
    {
        string s;

        int n = 0;
        cin >> s;

        if (s[0] != 'a')
        {
            n++;
        }

        if (s[1] != 'b')
        {
            n++;
        }

        if (s[2] != 'c')
        {
            n++;
        }
        if (n > 2)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }

    return 0;
}