#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, valor;
    char instruc[6];

    stack<pair<int, int>> pilha;

    scanf(" %d ", &n);

    for (int i = 0; i < n; i++)
    {

        scanf(" %s ", instruc);
        // printf("\t%c\n", instruc[1]);
        switch (instruc[1])
        {
        case 'U':
            scanf(" %d ", &valor);
            if (pilha.empty())
            {
                pilha.push({valor, valor});
            }
            else
            {
                if (pilha.top().second > valor)
                {
                    pilha.push({valor, valor});
                }
                else
                {
                    pilha.push({valor, pilha.top().second});
                }
            }
            break;
        case 'O':
            if (pilha.empty())
            {
                printf("EMPTY\n");
            }
            else
            {
                pilha.pop();
            }
            break;
        default:
            // printf("TO AQUI\n");
            if (pilha.empty())
            {
                printf("EMPTY\n");
            }
            else
            {
                printf("%d\n", pilha.top().second);
            }
            break;
        }
    }

    return 0;
}