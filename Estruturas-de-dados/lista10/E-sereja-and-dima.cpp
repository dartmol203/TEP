#include <bits/stdc++.h>

using namespace std;

int main()
{

    int qntCard, ptsS = 0, ptsD = 0;
    int vet[1001];

    cin >> qntCard;

    for (int i = 0; i < qntCard; i++)
    {
        cin >> vet[i];
    }

    auto i = 0, j = qntCard;
    int cont = 1;
    while (i != j)
    {
        if (vet[i] > vet[j - 1])
        {
            if (cont % 2 == 1)
            {
                ptsS += vet[i];
            }
            else
            {
                ptsD += vet[i];
            }
            i++;
        }
        else
        {

            if (cont % 2 == 1)
            {
                ptsS += vet[j - 1];
            }
            else
            {
                ptsD += vet[j - 1];
            }
            j--;
        }
        cont++;
    }

    cout << ptsS << ' ' << ptsD << '\n';

    return 0;
}