#include <stdio.h>

int main(void)
{
    char input[4];
    int convertido;

    scanf("%c %c %c", &input[0], &input[1], &input[2]);

    sscanf(input, "%d", &convertido);

    if (convertido % 4 != 0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }

    return 0;
}