#include <bits/stdc++.h>

using namespace std;
int main()
{

    int a, b;

    cin >> a >> b;

    a += b;

    if (a % 2 == 1)
    {
        cout << "Lucas\n";
    }
    else
    {
        cout << "Pedro\n";
    }

    return 0;
}