#include <bits/stdc++.h>

using namespace std;

int H, W, qntN;
char A[105][105];
int N[105];

void findcross(int i, int j)
{
    int x = i, y = j, z = 0;

    do
    {
        x++;
        y++;
        z++;
        // cout << '\t' << z << endl;

        // cout << "\t\t\t" << x << ' ' << y << endl;

        // cout << '\t' << '\t' << A[x - 1][y - 1] << A[x - 1][y + 1] << "\n\t\t" << A[x + 1][y - 1] << A[x + 1][y + 1];

    } while (A[x + 1][y + 1] == '.' or A[x + 1][y - 1] == '.' or A[x - 1][y + 1] == '.' or A[x - 1][y - 1] == '.');
    // cout << '\n';

    N[z - 1]++;

    A[x][y] = '.';
    for (int i = 0; i < z + 1; i++)
    {
        A[x + i][y + i] = '.';
        A[x + i][y - i] = '.';
        A[x - i][y + i] = '.';
        A[x - i][y - i] = '.';
    }
}

int main()
{

    cin >> H >> W;

    char x;

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> x;
            A[i][j] = x;
        }
    }

    qntN = min(H, W);

    for (int i = 0; i < qntN; i++)
    {
        N[i] = 0;
    }

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (A[i][j] == '#')
            {
                findcross(i, j);
                /*
                for (int i = 0; i < H; i++)
                {
                    for (int j = 0; j < W; j++)
                    {
                        cout << A[i][j] << ' ';
                    }
                    cout << endl;
                }
                cout << endl;
                */
            }
        }
    }

    for (int i = 0; i < qntN - 1; i++)
    {
        cout << N[i] << ' ';
    }
    cout << N[qntN - 1] << '\n';

    return 0;
}