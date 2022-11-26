// incompleto
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int B, D, overflow = 0;

    scanf("%d %d", &B, &D);

    char input[D + 1];
    stack<char> pilha;
    stack<char> saida;

    scanf("%s", input);
    for (int i = 0; i < D; i++)
    {
        pilha.push(input[i]);
    }

    while (!pilha.empty())
    {
        // printf("\t %c\n", pilha.top());
        if (pilha.top() == '0')
        {
            if (overflow == 1)
            {
                saida.push('1');
            }
            else
            {
                saida.push('0');
            }
        }
        else
        {
            if (overflow == 1)
            {
                saida.push('0');
                overflow = 0;
            }
            else
            {
                saida.push('1');
                overflow = 1;
            }
        }

        pilha.pop();
    }

    if (saida.top() == '0')
        saida.pop();

    while (!saida.empty())
    {
        printf("%c", saida.top());
        saida.pop();
    }
    printf("\n");

    return 0;
}