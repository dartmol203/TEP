#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<int> fila;

    char input[3];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            scanf("%s ", input);
            switch (input[0])
            {
            case 'A':
                fila.push(1);
                break;
            case 'T':

            case 'J':

            case 'Q':

            case 'K':
                fila.push(10);
                break;
            default:
                fila.push(input[0] - 48);
                break;
            }
        }
    }

    int saida = 0;
    while (saida + fila.front() <= 21)
    {
        saida += fila.front();
        fila.pop();
    }

    printf("%d\n", saida);

    return 0;
}