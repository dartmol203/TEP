#include <bits/stdc++.h>

using namespace std;

int expo(int x, int y)
{
    if (y == 0)
        return 1;
    if (y & 1)
        return x * expo(x * x, y / 2);
    else
        return expo(x * x, y / 2);
}

int main()
{

    int x;

    cin >> x;

    int maxi = 0;
    if (x == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    for (int i = 2; i < x / 2; i++)
    {
        for (int j = 2; j < x / 2; j++)
        {
            int exp = expo(i, j);
            if (exp == x)
            {
                cout << x;
                return 0;
            }
            if (exp < x)
            {
                maxi = max(maxi, exp);
            }
            if (exp > x)
            {
                break;
            }
        }
    }

    cout << maxi << endl;

    return 0;
}