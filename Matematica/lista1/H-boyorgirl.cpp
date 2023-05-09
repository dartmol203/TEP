#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;

    set<char> s1;

    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        s1.insert(s[i]);
    }

    if ((s1.size() & 1) == 0)
    {
        cout << "CHAT WITH HER!\n";
    }
    else
    {
        cout << "IGNORE HIM!\n";
    }
    return 0;
}