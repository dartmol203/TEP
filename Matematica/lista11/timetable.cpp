#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;

    cin >> s;
    int n;
    if ((s.length() - 1) % 2 == 0)
    {

        n = (s.length() - 1) / 2;
        string s2 = s.substr(1, s.length() - 1);
        // cout << s << endl;
        if (s2.find('1') != string::npos)
        {
            n++;
        }
    }
    else
    {
        n = (s.length() - 1) / 2 + 1;
    }
    if (s == "1" or s == "0")
    {
        cout << "0\n";
    }
    else
    {
        if (s == "10" or s == "11")
        {
            cout << "1\n";
        }
        else
        {

            cout << n << '\n';
        }
    }
    return 0;
}