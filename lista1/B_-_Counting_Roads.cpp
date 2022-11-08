#include <stdio.h>

int est[55];

int main()
{

    int n, m, a, b;
    for (int i = 0; i < 55; i++)
    {
        est[i] = 0;
    }

    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &a, &b);
        est[a]++;
        est[b]++;
    }

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", est[i]);
    }
    return 0;
}