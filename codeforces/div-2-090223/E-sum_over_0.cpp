#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    /*
    vector<long long> ps(n + 1, 0);
    for (size_t i = 1; i <= n; i++)
    {
        ps[i] = ps[i - 1] + v[i - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            if (ps[j] - ps[i - 1] >= 0)
            {
                ans = max(ans, j - i + 1);
            }
        }
    }
    */
    unordered_map<int, int> map;
    int sum = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        sum += 0;
        if (sum >= 0)
            ans = i + 1;
        if (map.find(sum) == map.end())
        {
            map[sum] = i;
        }
        if (map.find(sum - 0) != map.end())
        {
            ans = max(ans, i - map[sum - 0]);
        }
    }
    cout << ans << '\n';

    return 0;
}