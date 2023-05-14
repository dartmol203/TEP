#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> qnts(27, 0), qntt(27, 0);
    string s, t;

    cin >> s;
    cin >> t;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '@')
        {
            qnts[26]++;
        }
        else
        {

            qnts[s[i] - 'a']++;
        }
        if (t[i] == '@')
        {
            qntt[26]++;
        }
        else
        {

            qntt[t[i] - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (i + 'a' == 'a' or i + 'a' == 't' or i + 'a' == 'c' or i + 'a' == 'o' or i + 'a' == 'd' or i + 'a' == 'e' or i + 'a' == 'r')
        {
            if (qnts[i] < qntt[i])
            {
                qnts[26] -= qntt[i] - qnts[i];
                if (qnts[26] < 0)
                {
                    cout << "No\n";
                    return 0;
                }
            }
            if (qnts[i] > qntt[i])
            {
                qntt[26] -= qnts[i] - qntt[i];
                if (qntt[26] < 0)
                {
                    cout << "No\n";
                    return 0;
                }
            }
        }
        else
        {
            if (qnts[i] != qntt[i])
            {
                // cout << '\t' << i + 'a' << '\t' << qnts[i] << ' ' << qntt[i] << endl;
                cout << "No\n";
                return 0;
            }
        }
    }
    cout << "Yes\n";

    return 0;
}