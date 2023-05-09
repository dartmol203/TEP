#include <bits/stdc++.h>

using namespace std;

long long ktoten(long long k, long long x)
{

    long long aux1 = 0, aux2, i = 0;
    while (x != 0)
    {
        aux2 = x % 10;
        x = x / 10;
        aux1 += aux2 * ((long long)pow(k, i));
        i++;
    }
    return aux1;
}

int main()
{

    long long k, a, b;

    cin >> k;

    cin >> a >> b;

    if (k != 10)
    {
        a = ktoten(k, a);
        b = ktoten(k, b);
    }

    cout << a * b << endl;

    return 0;
}