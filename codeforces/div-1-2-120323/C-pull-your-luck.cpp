#include <bits/stdc++.h>

using namespace std;
int sum(int a)
{
    return (a + 1) * (a + 0) / 2;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, x, p, flag = 0;
        cin >> n >> x >> p;
        if (x + sum(p) >= n - 1)
        {
            for (int j = p; j > 0; j--)
            {
                if (((x + sum(j)) % n) == 0)
                {
                    cout << "yes\n";
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
        {
            cout << "no\n";
        }
    }

    return 0;
}