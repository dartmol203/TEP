#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s = "1";

    int q;

    cin >> q;

    int x, cnt = 0;
    for (int i = 1; i <= q; i++)
    {
        cin >> x;
        switch (x)
        {
        case 1:
            cin >> x;
            s.push_back(x + '0');
            break;
        case 2:
            cnt++;
            break;

        default:
            string out;
            for (int j = cnt; j < i; j++)
            {
                out.push_back(s[j]);
            }
            // cout << s << endl;
            cout << stol(out) % 998244353 << '\n';
            break;
        }
    }

    return 0;
}