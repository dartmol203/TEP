#include <bits/stdc++.h>

using namespace std;
int sum(int x)
{
    int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int x, a, b;
        cin >> x;

        if (x % 2 == 0)
        {
            a = x / 2;
            b = x / 2;
        }
        else
        {
            a = x / 2;
            b = (x / 2) + 1;
        }
        int sumA = sum(a), sumB = sum(b);

        while (abs(sumB - sumA) > 1)
        {
            a += 1;
            b -= 1;
            sumA = sum(a);
            sumB = sum(b);
        }

        cout << a << ' ' << b << '\n';
    }

    return 0;
}