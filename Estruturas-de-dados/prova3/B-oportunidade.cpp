#include <bits/stdc++.h>

using namespace std;

int main()
{

    int m, n;
    cin >> m >> n;
    int soma = 0, emprestimo = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x * -1 > soma and x < 0)
        {
            emprestimo += x * -1 - abs(soma);
            soma += x * -1 - abs(soma);
        }
        soma += x;
        // cout << x << '\t' << soma << '\t' << emprestimo << '\n';
    }

    if (abs(emprestimo) > m)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << abs(emprestimo) << '\n';
    }

    return 0;
}