#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    while (scanf("%d%d", &a, &b) == 2)
    {
        double t;

        t = (double)a / b;

        printf("[%d;", (int)t);

        a = a - (int)t * b;

        swap(a, b);

        t = (double)a / b;

        printf("%d", (int)t);

        a = a - (int)t * b;

        while (a != 0)
        {
            swap(a, b);
            t = (double)a / b;
            printf(",%d", (int)t);
            a = a - (int)t * b;
        }

        printf("]\n");
    }
    return 0;
}