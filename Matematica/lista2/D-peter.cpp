#include <bits/stdc++.h>

using namespace std;

int getcigarros(int n, int k)
{

    if (n == 0)
    {
        return 0;
    }

    return n + getcigarros(n / k, k);
}

int main()
{

    int n, k;

    while (scanf("%d %d ", &n, &k) != EOF)
    {
        // cout << "opa\n";
        cout << n + (n - 1) / (k - 1) << endl;
    }

    return 0;
}