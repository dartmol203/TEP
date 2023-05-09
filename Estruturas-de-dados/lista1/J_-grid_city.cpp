#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int locsx[50001], locsy[50001];

int compare(const void *a, const void *b)
{
    const int *x = (int *)a;
    const int *y = (int *)b;

    if (*x > *y)
        return 1;
    else if (*x < *y)
        return -1;

    return 0;
}

int main()
{
    int T, a, s, f;

    scanf("%d ", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d %d ", &s, &a, &f);

        for (int j = 0; j < f; j++)
        {
            scanf("%d %d ", &locsx[j], &locsy[j]);
        }
        /*
                for (int j = 0; j < f; j++)
                {
                    printf("\t%d %d \n", locsx[j], locsy[j]);
                }
        */

        qsort(locsx, f, sizeof(int), compare);
        qsort(locsy, f, sizeof(int), compare);
        /*
                for (int j = 0; j < f; j++)
                {
                    printf("%d %d \n", locsx[j], locsy[j]);
                }
        */
        if (f % 2 == 0)
        {
            printf("(Street: %d, Avenue: %d)\n", locsx[f / 2 - 1], locsy[f / 2 - 1]);
        }
        else
        {
            printf("(Street: %d, Avenue: %d)\n", locsx[f / 2], locsy[f / 2]);
        }
    }

    return 0;
}
