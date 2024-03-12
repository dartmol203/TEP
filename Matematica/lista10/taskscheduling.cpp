#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long x = 0;

    vector<long long> v(4);

    cin >> v[0] >> v[1] >> v[2];

    sort(v.rbegin(), v.rend());

    x += v[0] - v[1];
    x += v[1] - v[2];

    cout << x << endl;
    return 0;
}