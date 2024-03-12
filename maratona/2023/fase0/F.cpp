#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    string s1, s2;

    cin >> s1;
    cin >> s2;

    int q, a, b;
    cin >> q;

    while (q--)
    {
        int qnt = 0;
        cin >> a >> b;

        char subss1[100005], subss2[100005];
        s2.copy(subss1, b - a + 1, a - 1);
        subss1[b - a + 1] = '\0';

        for (int i = 0; i + b - a + 1 <= n; i++)
        {
            s1.copy(subss2, b - a + 1, i);
            subss2[b - a + 1] = '\0';
            // cout << "opa\n \t" << subss1 << ' ' << subss2 << endl;
            if (strcmp(subss1, subss2) == 0)
            {
                qnt++;
            }
        }
        cout << qnt << endl;
    }

    return 0;
}