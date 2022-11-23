#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int qtdQuerry;

    char querry[6], nome[16];

    stack<string> pilha;

    scanf(" %d ", &qtdQuerry);

    for (int i = 0; i < qtdQuerry; i++)
    {
        scanf(" %s ", querry);
        switch (querry[0])
        {
        case 'S':
            scanf(" %s ", nome);
            pilha.push(nome);
            break;
        case 'T':
            if (!pilha.empty())
            {
                // printf("%s\n", pilha.top());
                cout << pilha.top() << "\n";
            }
            else
            {
                printf("Not in a dream\n");
            }
            break;
        default:
            if (!pilha.empty())
            {
                pilha.pop();
            }
            break;
        }
    }

    return 0;
}