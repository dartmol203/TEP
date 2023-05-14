#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, x;

    unsigned long long sum = 0;
    cin >> n;

    for (int i = 0; i < n - 1; i++)
    {
        cin >> x;
        sum += x;
        // cout << "\t\t" << sum;
    }

    // cout << endl;
    // cout << '\t' << n << '\t' << sum << '\t' << (1 + n) * n / 2 << endl;

    cout << (int)((1 + n) * n / 2 - sum) << endl;

    return 0;
}