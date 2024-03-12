#include <bits/stdc++.h>

using namespace std;

long long vet[1010][1010];

long long dp(long long n, long long m)
{
    if (n == 0 and m == 0)
        return vet[n][m];
    if (n == 0)
        return vet[n][m - 1];
    if (m == 0)
        return vet[n - 1][m];

    return vet[n][m] + max(vet[n - 1][m], vet[n][m - 1]);
}

int main()
{

    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        long long n, m, k, b;
        cin >> n >> m >> k >> b;
        for (long long j = 0; j < n; j++)
        {
            for (k = 0; k < m; k++)
            {
                cin >> vet[j][k];
            }
        }

        cout << "Case " << i << ' : ' << dp(n, m) << '\n';
    }

    return 0;
}