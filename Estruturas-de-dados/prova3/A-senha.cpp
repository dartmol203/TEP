#include <bits/stdc++.h>

using namespace std;
int fat(int a)
{

    return a > 0 ? (a * fat(a - 1)) : 1;
}
int main()
{

    char s[6];
    map<char, int> m;

    scanf(" %c%c/%c%c/%c%c ", &s[0], &s[1], &s[2], &s[3], &s[4], &s[5]);

    for (int i = 0; i < 6; i++)
    {
        m[s[i]] += 1;
    }

    int ans = fat(6);
    for (int i = 0; i < m.size(); i++)
    {
        ans /= fat(m[i]);
        // cout << '\t' << m[i] << '\n';
    }

    cout << ans << '\n';
    return 0;
}