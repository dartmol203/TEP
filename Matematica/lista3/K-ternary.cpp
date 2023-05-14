#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long x = 0;
    while (x != -1)
    {

        cin >> x;
        if (x < 0)
            return 0;

        if (x == 0)
        {
            cout << "0\n";
        }
        else
        {

            stack<int> s;

            while (x > 0)
            {
                s.push(x % 3);
                x /= 3;
            }
            while (!s.empty())
            {
                cout << s.top();
                s.pop();
            }
            cout << '\n';
        }
    }

    return 0;
}