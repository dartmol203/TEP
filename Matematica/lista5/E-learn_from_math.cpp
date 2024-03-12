#include <bits/stdc++.h>

using namespace std;

int is_prime(int k)
{
    int qnt_div = 0;
    for (int i = 2; i <= sqrt(k); i++)
    {
        if (k % i == 0)
        {
            // printf("o numero e divisivel por %d\n", i); caso queira saber quais os divisores
            qnt_div++;
            return 0;
        }
    }

    if (qnt_div == 0)
    {
        return 1;
    }
    return 0;
}

int main()
{

    int x;

    cin >> x;

    int l = 1, r = x;
    // cout << l + r << ' ' << l << ' ' << r << ' ' << is_prime(l) << ' ' << is_prime(r) << endl;
    while (l + r != x or is_prime(l) or is_prime(r))
    {
        if (l + r >= x)
        {
            r--;
        }
        else
        {
            l++;
        }
        // cout << l + r << ' ' << l << ' ' << r << ' ' << is_prime(l) << ' ' << is_prime(r) << endl;
    }
    cout << l << ' ' << r << endl;

    return 0;
}