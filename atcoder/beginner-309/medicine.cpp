#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long k, n;

    cin >> n >> k;
    vector<pair<long long, long long>> vet(n);

    int pills = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> vet[i].first >> vet[i].second;
        pills += vet[i].second;
    }
    int aux = 1;
    if (pills <= k)
    {
        cout << 1 << '\n';
    }
    else
    {
        sort(vet.begin(), vet.end());
        // for (int i = 0; i < n; i++)
        //{
        // cout << '\t' << vet[i].first << ' ' << vet[i].second << endl;
        //}
        int i = 0;
        while (pills > k)
        {
            int j = i;
            while (j < n and vet[j].first == vet[i].first)
            {
                // cout << "\tOPA " << pills << "\n";
                pills -= vet[j].second;
                j++;
            }
            // cout << "opa2" << ' ' << pills << ' ' << i << "\n";
            //  cout << k << ' ' << pills << '\n';
            aux = vet[i].first + 1;
            i = j;
        }

        cout << aux << '\n';
    }

    return 0;
}