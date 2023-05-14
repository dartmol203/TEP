#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, aux;

    cin >> n;

    vector<int> v(n + 5);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        cout << v[i] << ' ';
        if (v[i] < v[i + 1])
        {
            aux = v[i] + 1;

            while (aux < v[i + 1])
            {
                cout << aux << ' ';
                aux++;
            }
        }
        else
        {

            aux = v[i] - 1;
            while (aux > v[i + 1])
            {
                cout << aux << ' ';
                aux--;
            }
        }
    }
    cout << v[n - 1];
    cout << endl;
    return 0;
}