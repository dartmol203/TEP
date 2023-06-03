#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, d;

    cin >> n >> d;

    vector<pair<long, long>> vet(n);
    vector<long long> infected(n, 0);
    stack<long long> s;

    for (int i = 0; i < n; i++)
    {
        cin >> vet[i].first >> vet[i].second;
    }
    infected[0] = 1;
    s.push(0);

    while (!s.empty())
    {
        long long aux = s.top();
        s.pop();
        for (int i = 1; i < n; i++)
        {
            if (infected[i])
                continue;
            if (sqrt((vet[aux].first - vet[i].first) * (vet[aux].first - vet[i].first) + (vet[aux].second - vet[i].second) * (vet[aux].second - vet[i].second)) <= d)
            {
                infected[i] = 1;
                s.push(i);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (infected[i])
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}