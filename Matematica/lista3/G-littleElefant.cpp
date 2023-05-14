#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;

    cin >> s;
    int flag = 0;

    for (int i = 0; i < s.size() - 1; i++)
    {
        if (flag == 0 and s[i] == '0')
        {
            flag++;
        }
        else
        {
            cout << s[i];
        }
    }
    if (flag != 0)
    {
        cout << s[s.size() - 1];
    }
    cout << endl;

    return 0;
}