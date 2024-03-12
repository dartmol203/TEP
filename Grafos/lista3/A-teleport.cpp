#include <bits/stdc++.h>

using namespace std;

int main()
{

    unsigned long long n, k;

    cin >> n >> k;
    vector<long long> v(n + 1);
    vector<long long> v2(n + 1, -1);
    for (unsigned long long i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    vector<long long> path(n + 1);

    unsigned long long i = 1;
    while (v2[i] == -1)
    {
        v2[i] = i;
        i = v[i];
    }
    unsigned long long pre = 0, size = 1;

    unsigned long long x = 1;
    while (x != i)
    {
        pre++;
        if (pre == k)
        {
            cout << v[x] << '\n';
            return 0;
        }
        x = v[x];
    }
    x = v[i];
    while (x != i)
    {
        size++;
        x = v[x];
    }
    // for (int x = 0; x < i; x++)
    //{
    //     cout << path[x] << ' ';
    // }

    // cout << endl;

    unsigned long long ans = (k - pre) % (size);

    // cout << ans << '\n';
    unsigned long long ans2 = i;
    for (unsigned long long j = 0; j < ans; j++)
    {
        ans2 = v[ans2];
    }

    cout << ans2 << '\n';
    return 0;
}