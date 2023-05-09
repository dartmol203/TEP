#include <stdio.h>

int main()
{

    int a, g1 = 0, g2 = 0, g3 = 0;

    for (int i = 0; i < 2; i++)
    {
        scanf("%d ", &a);
        switch (a)
        {
        case 1:

        case 3:

        case 5:

        case 7:

        case 8:

        case 10:

        case 12:
            g1++;
            break;
        case 4:

        case 6:

        case 9:

        case 11:
            g2++;
            break;
        default:
            g3++;
            break;
        }
    }

    if (g1 == 2 || g2 == 2 || g3 == 2)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}