#include <stdio.h>

int main()
{

    int H, W;

    char vet[105][105];

    scanf("%d %d", &H, &W);

    for (int i = 0; i < H; i++)
    {
        scanf(" %s ", vet[i]);
    }

    printf("#");
    for (int i = 0; i < W; i++)
        printf("#");
    printf("#\n");

    for (int i = 0; i < H; i++)
    {
        printf("#%s#\n", vet[i]);
    }

    printf("#");
    for (int i = 0; i < W; i++)
        printf("#");
    printf("#\n");

    return 0;
}