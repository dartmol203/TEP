#include <bits/stdc++.h>

using namespace std;

int main()
{

    double g, d;

    double r;

    double v;

    cin >> g >> d >> r;

    v = (1000 * r / g) / (1 - (d / 100));
    cout << v << '\n';
    return 0;
}