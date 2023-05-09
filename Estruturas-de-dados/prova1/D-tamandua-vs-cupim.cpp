#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int X, Y, Z, N, M, qnttam = 0;

    int tamam[100000];

    scanf("%d %d %d", &X, &Y, &Z);

    scanf("%d %d", &M, &N);

    char input[N];

    scanf("%s", input);

    for (int i = 0; i < N; i++)
    {
        switch (input[i])
        {
        case 'F':
            for (int j = 0; j < 100000; j++)
            {
                if (tamam[j] + X <= M)
                {
                    if (tamam[j] == 0)
                    {
                        qnttam++;
                    }
                    tamam[j] += X;
                    break;
                }
            }
            break;
        case 'A':
            for (int j = 0; j < 100000; j++)
            {
                if (tamam[j] + Y <= M)
                {
                    if (tamam[j] == 0)
                    {
                        qnttam++;
                    }
                    tamam[j] += Y;
                    break;
                }
            }
            break;

        default:
            for (int j = 0; j < 100000; j++)
            {
                if (tamam[j] + Z <= M)
                {
                    if (tamam[j] == 0)
                    {
                        qnttam++;
                    }
                    tamam[j] += Z;
                    break;
                }
            }
            break;
        }
    }

    printf("%d\n", qnttam);

    return 0;
}