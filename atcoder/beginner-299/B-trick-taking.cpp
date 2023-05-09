#include <bits/stdc++.h>

using namespace std;

int main()
{

    int N, T;

    vector<long long> colors, ranks, x1, xt;

    cin >> N >> T;

    long long aux, aux2 = -1, flag = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> aux;
        if (i == 0)
        {
            x1.push_back(i);
            aux2 = aux;
        }
        if (aux == T)
        {
            flag++;
            xt.push_back(i);
        }
        if (aux == aux2)
        {
            x1.push_back(i);
        }
        colors.push_back(aux);
    }

    for (int i = 0; i < N; i++)
    {

        cin >> aux;
        ranks.push_back(aux);
    }
    if (flag)
    {
        aux = 0;
        for (int i = 1; i < flag; i++)
        {
            if (ranks[xt[aux]] < ranks[xt[i]])
                aux = xt[i];
        }
        cout << aux + 1 << endl;
        return 0;
    }
    else
    {
        aux = 0;
        for (int i = 1; i < flag; i++)
        {
            if (ranks[x1[aux]] < ranks[x1[i]])
                aux = xt[i];
        }
        cout << aux + 1 << endl;
        return 0;
    }
    return 0;
}