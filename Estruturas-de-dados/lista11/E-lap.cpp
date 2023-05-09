#include <bits/stdc++.h>

using namespace std;

int main()
{

    int z, a, b;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        z = b - a;

        int x = z;
        int lap = 1;
        while (x < b)
        {
            x += z;
            lap++;
        }

        cout << lap << '\n';
    }
    return 0;
}