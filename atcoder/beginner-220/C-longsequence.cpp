#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long n, x, sum = 0;

    cin >> n;

    vector<long long> vet(n + 5);

    for (long long i = 0; i < n; i++)
    {
        cin >> vet[i];
        sum += vet[i];
    }

    cin >> x;

    if (x % sum == 0)
    {
        cout << x / sum * n + 1 << endl;
    }
    else
    {

        long long rep = x / sum, partsum;

        partsum = x - rep * sum;
        long long i = 0, aux = 0;
        while (aux <= partsum)
        {
            aux += vet[i];
            i++;
        }

        cout << rep * n + i << endl;
    }
    return 0;
}