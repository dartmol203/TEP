#include <bits/stdc++.h>

using namespace std;

int H, W;
char A[35][35], B[35][35], C[35][35];

int equal()
{
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (A[i][j] != B[i][j])
                return 0;
        }
    }
    return 1;
}

void vswitch()
{
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            C[i][j] = A[i][j];
        }
    }
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            A[(i + 1) % H][j] = C[i][j];
        }
    }
}

void hswitch()
{
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            C[i][j] = A[i][j];
        }
    }
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            A[i][(j + 1) % W] = C[i][j];
        }
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

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> x;
            B[i][j] = x;
        }
    }

    if (equal())
    {
        cout << "Yes\n";
        return 0;
    }

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {

            if (equal())
            {
                cout << "Yes\n";
                return 0;
            }
            hswitch();
        }
        if (equal())
        {
            cout << "Yes\n";
            return 0;
        }
        vswitch();
    }

    cout << "No\n";
    return 0;
}