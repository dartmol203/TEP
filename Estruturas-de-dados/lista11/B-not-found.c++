#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s, s2 = "abcdefghijklmnopqrstuvwxyz";

    cin >> s;
    for (int i = 0; i < 26; i++)
    {
        if (s.rfind(s2[i]) == -1)
        {

            cout << s2[i] << '\n';
            return 0;
        }
    }

    cout << "None\n";
    return 0;
}