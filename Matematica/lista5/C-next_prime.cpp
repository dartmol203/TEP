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

    while (is_prime(x) == 0)
    {
        x++;
    }
    cout << x << endl;

    return 0;
}