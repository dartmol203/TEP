
// implementação Brunna e Pedro
#include <stdio.h>

int main()
{
    int G, P, S, V, T = 1;
    int i, p, q, w, a, k, v, b, j;
    int corridas[100][100];
    int pontos[10][101];
    int saida[100];
    int max = 0;
    int conta;

    do
    {
        scanf("%d", &G);
        scanf("%d", &P);

        if (G == 0 || P == 0)
        {
            break;
        }

        for (i = 0; i < G; i++)
        {
            for (j = 0; j < P; j++)
            {
                scanf("%d", &corridas[i][j]);
            }
        }
        scanf("%d", &S);

        for (q = 0; q < S; q++)
        {
            scanf("%d", &V);
            for (w = 0; w < V; w++)
            {
                scanf("%d", &pontos[q][w]);
            }
        }

        for (b = 0; b < 100; b++)
        {
            saida[b] = 0;
        }

        for (k = 0; k < S; k++)
        {
            for (v = 0; v < P; v++)
            {
                for (i = 0; i < G; i++)
                {
                    for (j = 0; j < P; j++)
                    {
                        if (corridas[i][j] == T)
                        {
                            saida[j] = saida[j] + pontos[k][v];
                        }
                    }
                }
                T++;
            }
            T = 1;
            for (a = 0; a < P; a++)
            {
                if (saida[a] > max)
                {
                    max = saida[a];
                    conta = a + 1;
                }
            }
            printf("%d", conta);

            for (i = conta; i < P; i++)
            {
                if (max == saida[i])
                {
                    printf(" %d", i + 1);
                }
            }
            printf("\n");
            for (b = 0; b < 100; b++)
            {
                saida[b] = 0;
            }
            max = 0;
            conta = 0;
        }

        for (i = 0; i < G; i++)
        {
            for (j = 0; j < P; j++)
            {
                corridas[i][j] = 0;
            }
        }

        for (q = 0; q < S; q++)
        {

            for (w = 0; w < P; w++)
            {
                pontos[q][w] = 0;
            }
        }

    } while (G != 0 || P != 0);

    return 0;
}

// não funcional!
/*
#include <stdio.h>

int main()
{
    int pontos[10][105];
    int saida[105];
    int corridas[105][105];

    int g, p;

    scanf("%d %d ", &g, &p);

    while (g != 0 && p != 0)
    {
        for (int i = 0; i <= p; i++) // zera os pontos
        {
            saida[i] = 0;
        }

        for (int i = 1; i <= g; i++) // le as posições
        {
            for (int j = 1; j <= p; j++)
            {
                scanf("%d ", &corridas[i][j]);
            }
        }

        int s, k;
        int valores[105];
        scanf("%d ", &s); // quantidades de sistemas

        for (q=0; q<S; q++){
            scanf("%d", &k);
            for(w=0; w<k;w++){
                scanf("%d", &pontos[q][w]);
            }
        }


        for (int i = 0; i < s; i++)
        {
            int max = -1;
            scanf("%d ", &k);
            for (int j = 1; j <= k; j++)
            {
                scanf("%d ", &valores[j]);
            }

            for (int j = 1; j <= p; j++)
            {
                if (corridas[i][j] <= k)
                {
                    pontos[j] += valores[corridas[i][j]];
                    if (pontos[j] > max)
                    {
                        max = pontos[j];
                    }
                }
            }

            for (int i = 1; i <= p; i++)
            {
                if (pontos[i] == max)
                {
                    printf("%d ", i);
                }
            }
            printf("\n");
        }


        scanf(" %d %d ", &g, &p);
    }

    return 0;
}
*/