#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t, flag = 0;
    cin >> t;
    cout << t << " horas de tratamento:\n";

    if (t % 3 == 0)
    {
        flag++;
        cout << "Troca do soro\n";
    }
    if (t % 5 == 0)
    {
        flag++;
        cout << "Injecao de antibioticos\n";
    }
    if (t % 12 == 0)
    {
        flag++;
        cout << "Reavaliacao\n";
    }

    if (flag == 0)
    {
        cout << "Monitoramento dos sinais vitais\n";
    }

    return 0;
}