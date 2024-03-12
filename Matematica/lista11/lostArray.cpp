#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, l, r;

    cin >> n >> l >> r;

    int min = 0, max = 0;

    // cout << '\t' << "min" << endl;
    int i = 0;
    while (i < l)
    {
        // cout << '\t' << (1 << i) << endl;
        min += 1 << i;
        i++;
    }
    min += 1 * (n - i);
    // cout << '\t' << "max" << endl;
    i = 0;
    while (i < r)
    {
        max += 1 << i;
        // cout << '\t' << (1 << i) << ' ' << max << endl;
        i++;
    }
    // cout << "\t\t" << (1 << (i - 1)) * (n - i) << endl;
    max += (1 << (i - 1)) * (n - i);

    cout << min << ' ' << max << endl;
    return 0;
}