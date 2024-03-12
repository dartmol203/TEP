#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, x, mini = 110, maxi = -1, sum = 0;

    cin >> n >> x;

    for (int i = 0; i < n - 1; i++)
    {
        int aux;
        cin >> aux;
        sum += aux;
        mini = min(mini, aux);
        maxi = max(maxi, aux);
    }

    sum -= mini;
    sum -= maxi;

    if (sum >= x)
    {
        cout << "0\n";
    }
    else
    {
        if (sum + mini >= x)
        {
            cout << "0\n";
        }
        else
        {
            if (x - sum <= maxi)
            {
                cout << x - sum << '\n';
            }
            else
            {
                if (sum + maxi == x)
                {
                    cout << maxi << '\n';
                }
                else
                {
                    cout << -1 << '\n';
                }
            }
        }
    }

    return 0;
}