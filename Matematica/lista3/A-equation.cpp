#include <bits/stdc++.h>

using namespace std;

int main()
{

    cout << fixed;
    cout << setprecision(5);
    long double a, b, c, delta;

    cin >> a >> b >> c;

    delta = b * b - (4 * a * c);

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                cout << -1;
                return 0;
            }
            cout << 0;
            return 0;
        }
        cout << 1 << endl
             << -c / b;
        return 0;
    }

    if (delta < 0)
    {
        cout << "0\n";
    }
    if (delta == 0)
    {
        cout << "1\n"
             << -b / (2 * a) << endl;
    }
    if (delta > 0)
    {
        double x1, x2;
        x2 = (-b + sqrt(delta)) / (2 * a);
        x1 = (-b - sqrt(delta)) / (2 * a);

        cout << "2\n"
             << min(x1, x2) << '\n'
             << max(x1, x2) << endl;
    }

    return 0;
}