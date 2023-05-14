#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long n;
    string s;

    cin >> n;
    cin >> s;
    int qntT = 0, qntA = 0, f = 0;

    for (int i = 0; i < n; i++)
    {

        if (s[i] == 'T')
        {
            f = 2;
            qntT++;
        }
        else
        {
            f = 1;
            qntA++;
        }
    }

    if (qntA == qntT)
    {
        if (f == 1)
        {

            cout << 'T' << '\n';
        }
        else
        {
            cout << 'A' << '\n';
        }
    }
    else
    {
        if (qntA > qntT)
        {
            cout << "A\n";
        }
        else
        {
            cout << "T\n";
        }
    }

    return 0;
}