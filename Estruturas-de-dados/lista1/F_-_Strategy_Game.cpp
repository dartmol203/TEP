#include <stdio.h>

int main()
{
    int j, r;

    int points[501];

    while (scanf("%d %d ", &j, &r) != -1)
    {
        for (int i = 0; i < 501; i++)
        {
            points[i] = 0;
        }

        int maxnum = -1;
        int maxpos = -1;

        for (int i = 0; i < r; i++)
        {

            for (int k = 0; k < j; k++)
            {
                int aux;
                scanf("%d ", &aux);
                points[k] += aux;
                if (points[k] >= maxnum)
                {
                    maxpos = k;
                    maxnum = points[k];
                }
            }
        }
        /*
                for (int k = 0; k < j; k++)
                {
                    printf("%d ", points[k]);
                }
                printf("\n\n");
        */

        printf("%d\n", maxpos + 1);
    }
    return 0;
}