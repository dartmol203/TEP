#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    string s, t;

    cin >> n;
    cin >> s;
    cin >> t;

    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
        {
            if (s[i] == '1')
            {
                if (t[i] == 'l')
                {
                    continue;
                }
            }
            if (s[i] == 'l')
            {
                if (t[i] == '1')
                {
                    continue;
                }
            }
            if (s[i] == 'o')
            {
                if (t[i] == '0')
                {
                    continue;
                }
            }
            if (s[i] == '0')
            {
                if (t[i] == 'o')
                {
                    continue;
                }
            }

            cout << "No\n";
            return 0;
        }
    }

    cout << "Yes\n";
    return 0;
}