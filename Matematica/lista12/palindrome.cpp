#include <bits/stdc++.h>

using namespace std;

int main()
{

    string a1, a2, s;

    cin >> s;

    if (s.length() % 2 == 0)
    {
        a1 = s.substr(0, s.length() / 2);
        a2 = s.substr(s.length() / 2, s.length() / 2);
    }
    else
    {
        a1 = s.substr(0, (s.length() - 1) / 2);
        a2 = s.substr((s.length() + 1) / 2, s.length() / 2);
    }
    int hugs = 0;
    for (int i = 0; i < a1.length(); i++)
    {
        // cout << a1[i] << ' ' << a2[a2.length() - i - 1] << endl;
        if (a1[i] != a2[a2.length() - i - 1])
        {
            hugs++;
        }
    }
    cout << hugs << '\n';

    return 0;
}