#include <bits/stdc++.h>

using namespace std;
int main()
{

    int qnt;
    cin >> qnt;

    for (int i = 0; i < qnt; i++)
    {

        int n, q;
        vector<int> vet;
        cin >> n >> q;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            vet.push_back(x);
        }
        for (int j = 0; j < q; j++)
        {
            int x, l, r;
            cin >> x;
            if (x == 1)
            {
                cin >> l >> r;
                l -= 1;
                r -= 1;
                for (int k = l; k <= r; k++)
                {
                    int aux = vet[k], novo = 0;
                    while (aux > 0)
                    {
                        novo += aux % 10;
                        aux = aux / 10;
                    }
                    vet[k] = novo;
                }
            }
            else
            {
                cin >> l;
                cout << vet[l - 1] << '\n';
            }
        }
    }
    return 0;
}