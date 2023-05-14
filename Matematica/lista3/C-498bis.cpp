#include <bits/stdc++.h>

using namespace std;

long long pot(long long x, long long y)
{
    if (y == 0)
        return 1;
    if (y & 1)
        return x * pot(x * x, y / 2);
    else
        return pot(x * x, y / 2);
}
int main()
{

    long long x;
    while (scanf("%lld", &x) != EOF)
    {
        long long v[1000000];
        char aux = ' ';
        long long i = 0;
        while (aux != '\n')
        {
            // cout << "opa\n";
            scanf("%lld%c", &v[i++], &aux);
        }

        // cout << i << endl;
        long long res = 0;
        for (long long j = 0; j < i - 1; j++)
        {
            res += v[j] * (i - j - 1) * pot(x, i - j - 2);
        }
        cout << res << endl;
    }

    return 0;
}