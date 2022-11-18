#include <stdio.h>
#include <vector>

typedef struct name
{
    char string[5];
} name;

int main()
{
    int n;
    name nomes[102];

    scanf("%d ", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s ", nomes[i].string);
        // printf("%s ", nomes[i].string);
    }
    // printf("\n");
    int q;
    scanf("%d", &q);
    int buscado;

    while (scanf("%d", &buscado) != -1)
    {
        buscado -= 1;
        // printf("%d \t", buscado);
        if (nomes[buscado].string[0] != '?')
        {
            printf("%s\n", nomes[buscado].string);
        }
        else
        {

            int l = 0, r = 0;
            while (nomes[buscado - l].string[0] == '?')
            {
                l++;
            }
            while (nomes[buscado + r].string[0] == '?')
            {
                if (buscado + r >= n)
                {
                    r = 9999;
                    break;
                }
                r++;
            }
            // printf("%d %d \t", l, r);
            if (r == l && buscado + r < n && buscado - l > 0)
            {
                printf("middle of %s and %s\n", nomes[buscado - l].string, nomes[buscado + r].string);
            }
            else
            {

                if ((l < r && (l <= buscado || r >= n - buscado)) || buscado + r >= n)
                {
                    for (int i = 0; i < l; i++)
                    {
                        printf("right of ");
                    }
                    printf("%s\n", nomes[buscado - l].string);
                }
                else
                {

                    for (int i = 0; i < r; i++)
                    {
                        printf("left of ");
                    }
                    printf("%s\n", nomes[buscado + r].string);
                }
            }
        }
    }

    return 0;
}