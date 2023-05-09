#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        int x = abs(abs(a) - abs(b));
        if (x != 0)
            x--;
        cout << abs(a) + abs(b) + x << '\n';
    }

    return 0;
}