#include <stdio.h>

int main()
{
    int v1[5], v2[5];

    while (scanf("%d %d %d %d %d ", &v1[0], &v1[1], &v1[2], &v1[3], &v1[4]) != -1)
    {
        scanf("%d %d %d %d %d ", &v2[0], &v2[1], &v2[2], &v2[3], &v2[4]);
        int j = 0;
        for (int i = 0; i < 5; i++)
        {
            if (v1[i] + v2[i] == 1)
            {
                j++;
            }
        }
        if (j == 5)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }

    return 0;
}