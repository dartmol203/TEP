#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a, b, c, d;

    cin >> a >> b >> c >> d;
    int out = min(b, d) - max(a, c);
    if (out < 0)
        out = 0;
    cout << out << "\n";

    return 0;
}