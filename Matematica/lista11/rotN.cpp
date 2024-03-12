#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    int n;

    cin >> n;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        s[i] = 'A' + (s[i] - 'A' + n) % 26;
    }

    cout << s << endl;

    return 0;
}