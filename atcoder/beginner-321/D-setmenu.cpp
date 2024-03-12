#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long n, m, p;

    cin >> n >> m >> p;

    vector<long long> a(n), b(m);

    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (long long i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    long long sum = 0;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (long long i = 0; i < n; i++)
    {
        if (a[i] - 1 >= p)
        {
            sum += p * m;
        }
        else
        {
            for (long long j = 0; j < m; j++)
            {
                // cout << i << ' ' << j << ' ' << sum << '\n';
                long long aux;
                if (a[i] + b[j] <= p)
                {
                    aux = a[i] + b[j];
                    sum += aux;
                    // cout << '\t' << a[i] << ' ' << b[j] << ' ' << aux << '\n';
                }
                else
                {
                    aux = max(0LL, (m - j)) * p;
                    // cout << '\t' << a[i] << ' ' << b[j] << ' ' << aux << '\n';
                    sum += aux;
                    break;
                }
            }
        }
    }

    cout << sum << '\n';
    return 0;
}