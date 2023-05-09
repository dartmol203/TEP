#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long l, r, out = 1;

    cin >> l >> r;

    long long x = l ^ r;

    while (out <= x)
        out = out << 1;

    out--;
    cout << out << endl;
    return 0;
}