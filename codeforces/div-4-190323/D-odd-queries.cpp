#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, q;
        cin >> n >> q;
        vector<int> vet;
        vet.push_back(0);
        for (int j = 1; j <= n; j++)
        {
            int x;
            cin >> x;
            vet.push_back(vet[j - 1] + x % 2);
        }
        /*
                for (int j = 1; j <= n; j++)
                {
                    cout << vet[j] << ' ' << j << endl;
                }
                cout << endl;

                //cout << '\t' << "n" << ' ' << 'l' << ' ' << 'r' << ' ' << 'k' << ' ' << "sum"
        << " sub" << ' ' << "Vfinal" << endl;
        */
        for (int j = 0; j < q; j++)
        {
            int l, r, k;
            cin >> l >> r >> k;
            // cout << '\t' << vet[n] << ' ' << l << ' ' << r << ' ' << k << ' ' << (r - l + 1) * (k % 2) << ' ' << (vet[r] - vet[l - 1]) << ' ' << (vet[n] + (r - l + 1) * (k % 2) - (vet[r] - vet[l])) << endl;
            if ((vet[n] + (r - l + 1) * (k % 2) - (vet[r] - vet[l - 1])) % 2 == 1)
            {
                cout << "yes\n";
            }
            else
            {
                cout << "no\n";
            }
        }
    }

    return 0;
}