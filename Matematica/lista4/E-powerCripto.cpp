#include <bits/stdc++.h>

using namespace std;

int main()
{

    long double n, p;
    cout << setprecision(0);

    cout << fixed;
    while (cin >> n >> p)
    {
        long double ninv = 1.0L / n;
        cout << pow(p, ninv) << endl;
    }

    return 0;
}