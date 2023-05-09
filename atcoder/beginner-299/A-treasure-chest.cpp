#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    int barra = 0, ast = 0, n;

    cin >> n;

    cin >> s;

    for (int i = 0; i < n; i++)
    {
        switch (s[i])
        {
        case '*':
            if (barra == 0)
            {
                cout << "out";
                return 0;
            }
            else
            {
                cout << "in";
                return 0;
            }

            break;
        case '|':
            barra++;
            if (barra == 2)
            {
                cout << "out";
                return 0;
            }
            break;
        default:
            break;
        }
    }
    return 0;
}