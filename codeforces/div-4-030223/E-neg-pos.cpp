#include <bits/stdc++.h>

using namespace std;

int main()
{

    int qnt;
    cin >> qnt;
    for (int i = 0; i < qnt; i++)
    {

        int size;
        vector<int> vet;
        cin >> size;

        for (int j = 0; j < size; j++)
        {
            int x;
            cin >> x;
            vet.push_back(x);
        }
        for (int k = 0; k < 20; k++)
        {

            for (int j = 0; j < size - 1; j++)
            {
                if (vet[j] > 0 && vet[j + 1] > 0)
                {
                    continue;
                }
                else
                {
                    if (vet[j] * -1 > vet[j + 1] || vet[j + 1] * -1 > vet[j])
                    {
                        vet[j] = vet[j] * -1;
                        vet[j + 1] = vet[j + 1] * -1;
                    }
                }
            }
        }
        int x = 0;
        for (int j = 0; j < size; j++)
        {
            x += vet[j];
        }

        cout << x << '\n';
    }

    return 0;
}