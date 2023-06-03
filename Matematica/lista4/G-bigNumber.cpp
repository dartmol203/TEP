#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long t, n;
    long double lg;
    cin >> t;

    while (t--)
    {
        cin >> n;
        lg = 0;
        for (int i = 1; i <= n; i++)
        {
            lg += log10(i);
        }
        cout << ceil(lg) << endl;
    }
    return 0;
}
