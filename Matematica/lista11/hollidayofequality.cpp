#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, max = -1;

    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] > max)
        {
            max = v[i];
        }
    }
    int qnt = 0;

    for (int i = 0; i < n; i++)
    {
        qnt += max - v[i];
    }

    cout << qnt << endl;
    return 0;
}