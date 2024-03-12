#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long n, k, max;

    cin >> n >> k;

    n *= 2;
    max = n + 1;
    long long i = n;
    while (i > 0)
    {
        // cout << "opa";
        // cout << '\t' << abs(i - k) % max << endl;
        if (abs(i * i - k) % max == 0 and i * i != k)
        {
            cout << i * i << endl;
            return 0;
        }
        i--;
    }

    return 0;
}