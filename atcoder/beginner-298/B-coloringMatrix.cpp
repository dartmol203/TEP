#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;

    int A[100][100], B[100][100];
    int C[100][100];

    cin >> N;

    int x;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> x;
            A[i][j] = x;
        }
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> x;
            B[i][j] = x;
        }
    }

    for (int k = 0; k < 3; k++)
    {

        int flag = 0;
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= N; j++)
            {
                if (A[i][j] == 1 && A[i][j] != B[i][j])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag)
                break;
        }
        if (!flag)
        {
            cout << "Yes\n";
            return 0;
        }
        else
        {
            for (int i = 1; i <= N; i++)
            {
                for (int j = 1; j <= N; j++)
                {
                    C[N + 1 - j][i] = A[i][j];
                }
            }
            for (int i = 1; i <= N; i++)
            {
                for (int j = 1; j <= N; j++)
                {
                    A[i][j] = C[i][j];
                }
            }
        }
    }
    cout << "No\n";
    return 0;
}