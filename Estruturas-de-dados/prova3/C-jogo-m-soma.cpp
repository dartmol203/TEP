#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    int v[100001];
    string s;

    cin >> n;
    v[0] = 0;
    for (int i = 1; i < n + 1; i++)
    {
        int x;
        cin >> x;
        v[i] = v[i - 1] + x;
        cout << v[i] << '\t';
    }
    int soma = -99999999;
    for (int i = 0; i < n / 2; i++)
    {
        printf("opa\n");
        string s1;
        for (int j = 0; j < i; j++)
        {
            s1 += 'L';
        }
        for (int j = i; j < n / 2; j++)
        {
            s1 += 'R';
        }
        cout << v[i] + v[n] - v[n - i] << '\n';
        soma = max(soma, v[i] + v[n] - v[n - i]);
    }

    cout << soma << '\n';
    cout << s << '\n';

    return 0;
}