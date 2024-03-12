#include <bits/stdc++.h>

using namespace std;
long long fact(int n)
{
    int ans = 1;
    for (int i = 2; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
}
int main()
{

    int n;

    cin >> n;
    long long x, ans = 1;

    x = n / 2;

    for (int i = 0; i <= x; i += 1)
    {
        ans += fact(n - 2 * i); // (fact(n - i - i));
    }

    cout << ans << '\n';
    return 0;
}