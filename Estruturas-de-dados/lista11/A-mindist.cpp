#include <bits/stdc++.h>

using namespace std;

int main()
{

    int z, a, b;

    cin >> z >> a >> b;

    a = abs(a - z);
    b = abs(b - z);
    if (a > b)
    {
        cout << "B\n";
    }
    else
    {
        cout << "A\n";
    }
    return 0;
}