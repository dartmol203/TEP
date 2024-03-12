#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;

    cin >> n;

    char x1[101][101], x2[101][101];
    char aux;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> aux;
            x1[i][j] = aux;
            x2[i][j] = aux;
        }
    }
    //    for (int i = 0; i < n; i++)
    //    {
    //        for (int j = 0; j < n; j++)
    //        {
    //            cout << x2[i][j] << ' ';
    //        }
    //        cout << '\n';
    //    }
    //    cout << endl;

    for (int i = 0; i < n - 1; i++)
    {
        x2[0][i + 1] = x1[0][i];
        x2[n - 1][n - i - 1] = x1[n - 1][n - i];
    }
    //    for (int i = 0; i < n; i++)
    //    {
    //        for (int j = 0; j < n; j++)
    //        {
    //            cout << x2[i][j] << ' ';
    //        }
    //        cout << '\n';
    //    }
    //    cout << endl;

    for (int i = 0; i < n - 1; i++)
    {
        x2[n - i - 1][0] = x1[n - i][0];
        x2[i + 1][n - 1] = x1[i][n - 1];
    }
    //    for (int i = 0; i < n; i++)
    //    {
    //        for (int j = 0; j < n; j++)
    //        {
    //            cout << x2[i][j] << ' ';
    //        }
    //        cout << '\n';
    //    }
    //    cout << endl;

    x2[n - 1][n - 1] = x1[n - 2][n - 1];
    x2[0][0] = x1[1][0];
    x2[0][n - 1] = x1[0][n - 2];
    x2[n - 1][0] = x1[n - 1][1];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << x2[i][j];
        }
        cout << '\n';
    }
    return 0;
}