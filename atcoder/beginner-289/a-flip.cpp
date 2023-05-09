#include <bits/stdc++.h>

using namespace std;
int main()
{

    string s;

    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        switch (s[i])
        {
        case '1':
            cout << 0;
            break;

        default:
            cout << 1;
            break;
        }
    }
    cout << '\n';

    return 0;
}