#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, a, b, c;

    cin >> n >> a >> b;

    c = a + b;
    int x;

    for (int i = 0; i < n; i++)
    {
        cin >> x;

        if (x == c)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }

    return 0;
}