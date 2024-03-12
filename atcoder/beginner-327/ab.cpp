#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    string s;

    cin >> n;
    cin >> s;

    for (int i = 0; i < n - 1; i++)
    {
        if ((s[i] == 'a' and s[i + 1] == 'b') or (s[i] == 'b' and s[i + 1] == 'a'))
        {
            cout << "Yes\n";
            return 0;
        }
    }

    cout << "No\n";
    return 0;
}