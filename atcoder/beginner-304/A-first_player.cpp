#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<pair<string, long long>> vet(n);
    long long min = 9999999999;

    int pos;
    for (int i = 0; i < n; i++)
    {
        cin >> vet[i].first;
        cin >> vet[i].second;

        if (vet[i].second < min)
        {
            min = vet[i].second;
            pos = i;
        }
    }

    for (int i = pos; i < pos + n; i++)
    {
        cout << vet[i % n].first << endl;
    }

    return 0;
}