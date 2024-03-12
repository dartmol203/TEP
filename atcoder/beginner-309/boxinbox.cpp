#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long n, h, w, d;
    cin >> n;
    vector<tuple<long long, long long, long long>> vet(6 * n);

    for (long long i = 0; i < 6 * n; i += 6)
    {
        cin >> h >> w >> d;
        vet[i] = {h, w, d};
        vet[i + 1] = {h, d, w};
        vet[i + 2] = {w, h, d};
        vet[i + 3] = {w, d, h};
        vet[i + 4] = {d, h, w};
        vet[i + 5] = {d, w, h};
    }

    sort(vet.begin(), vet.end());

    for (int i = 0; i < n * 6; i++)
    {
        cout << '\t' << get<0>(vet[i]) << ' ' << get<1>(vet[i]) << ' ' << get<2>(vet[i]) << endl;
    }

    return 0;
}