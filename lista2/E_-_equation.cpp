/*
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int qntcasos;

    scanf(" %d ", &qntcasos);

    for (int i = 0; i < qntcasos; i++)
    {
        int k = 0;
        char saida[55];

        char input;
        stack<char> pilha;

        while (scanf(" %c ", &input) == 1)
        {
            // printf("\t%c\n", input);
            switch (input)
            {
            case '+':
            case '-':
                while (!pilha.empty() && pilha.top() != '(')
                {
                    saida[k++] = pilha.top();
                    pilha.pop();
                }

                pilha.push(input);
                break;
            case '*':
            case '/':
                // printf("to aqui\n");
                while (!pilha.empty() && (pilha.top() == '/' || pilha.top() == '*'))
                {
                    saida[k++] = pilha.top();
                    //    printf("%c", pilha.top());
                    pilha.pop();
                }
                pilha.push(input);
                break;
            case '(':
                pilha.push(input);
                break;
            case ')':
                while (pilha.top() != '(')
                {

                    saida[k++] = pilha.top();
                    //    printf("%c", pilha.top());
                    pilha.pop();
                }
                if (!pilha.empty())
                {
                    pilha.pop();
                }
                break;
            default:
                saida[k++] = input;
                //    printf("%c", input);
                break;
            }
        }

        while (!pilha.empty())
        {

            saida[k++] = pilha.top();
            //    printf("%c", pilha.top());
            pilha.pop();
        }

        for (int j = 0; j < k; j++)
        {
            if (saida[j] >= 40 && saida[j] <= 57)
            {
                printf("%c", saida[j]);
            }
        }

        printf("\n%d\n", pilha.empty());
    }

    return 0;
}
*/
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cctype>
#include <cstdio>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    int t, j, i, len, k, length;
    char expr[100];
    char ch[5];
    scanf("%d\n", &t);
    for (j = 1; j <= t; j++)
    {
        stack<char> expstack;
        expstack.push('(');
        k = 0;
        while (gets(ch))
        {
            len = strlen(ch);
            if (len == 0)
                break;
            else
                expr[k++] = ch[0];
        }
        expr[k++] = ')';
        length = k;
        if (j > 1)
            printf("\n");
        for (i = 0; i < length; i++)
        {
            if (expr[i] == '(' || expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i] == '/')
            {
                if ((expr[i] == '+' || expr[i] == '-') && (expstack.top() == '*' || expstack.top() == '/' || expstack.top() == '+' || expstack.top() == '-'))
                {
                    while (expstack.top() == '*' || expstack.top() == '/' || expstack.top() == '+' || expstack.top() == '-')
                    {
                        printf("%c", expstack.top());
                        expstack.pop();
                    }
                    expstack.push(expr[i]);
                }
                else if ((expr[i] == '*' || expr[i] == '/') && (expstack.top() == '*' || expstack.top() == '/'))
                {
                    printf("%c", expstack.top());
                    expstack.pop();
                    expstack.push(expr[i]);
                }
                else
                    expstack.push(expr[i]);
            }
            else if (expr[i] == ')')
            {
                while (expstack.top() != '(')
                {
                    printf("%c", expstack.top());
                    expstack.pop();
                }
                expstack.pop();
            }
            else
                printf("%c", expr[i]);
        }
        while (!expstack.empty())
        {
            printf("%c", expstack.top());
            expstack.pop();
        }
        printf("\n");
    }
    return 0;
}