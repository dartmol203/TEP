#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, aux, ext;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        ext = 0;
        for (int j = 0; j < 7; j++)
        {
            cin >> aux;
            ext += aux;
        }
        cout << ext << ' ';
    }

    cout << endl;
    return 0;
}