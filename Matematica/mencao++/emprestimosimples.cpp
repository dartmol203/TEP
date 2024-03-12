#include <bits/stdc++.h>

using namespace std;

int main()
{

    cout << fixed;
    cout << setprecision(2);
    double m, j, t;

    cin >> m >> j >> t;

    for (int i = 0; i < t; i++)
    {
        double taxa = m * ((j / (double)100.0));
        // cout << '\t' << taxa << '\n';
        taxa = ((int)(taxa * (double)100.0)) / (double)100.0;
        // cout << '\t' << taxa << '\n';
        m += taxa;
    }

    cout << m << '\n';
    return 0;
}