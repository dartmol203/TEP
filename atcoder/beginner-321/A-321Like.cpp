#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;

    cin >> s;
    if (s.size() > 1)
    {

        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] >= s[i - 1])
            {
                cout << "No\n";
                return 0;
            }
        }
    }

    cout << "Yes\n";

    return 0;
}