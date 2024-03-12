#include <bits/stdc++.h>

using namespace std;

int main()
{

    double r, v, i, j, saldo = 0;

    cin >> r >> v;

    cin >> i >> j;

    long long ans = -1;
    double sem = 0;

    while (saldo < v and sem / 52 <= 70)
    {

        saldo *= (double)1 + (i / 100);
        v *= (double)1 - (j / 100);
        // cout << "\t\t" << (double)1 - j;
        saldo += r;
        sem++;
        // cout << '\t' << saldo << ' ' << v << '\n';
    }
    cout << (sem / 52 <= 70 ? sem : -1) << '\n';
    return 0;
}