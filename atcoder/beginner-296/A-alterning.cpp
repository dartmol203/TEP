#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, f = 0;
    char s[102];

    cin >> n;

    scanf(" %[^\n] ", s);

    for (int i = 0; i < n; i++)
    {
        switch (s[i])
        {
        case 'M':
            if (f == 0 || f == 2)
            {
                f = 1;
            }
            else
            {
                cout << "No\n";
                return 0;
            }
            break;

        default:
            if (f == 0 || f == 1)
            {
                f = 2;
            }
            else
            {
                cout << "No\n";
                return 0;
            }
            break;
        }
    }
    cout << "Yes\n";
    return 0;
}