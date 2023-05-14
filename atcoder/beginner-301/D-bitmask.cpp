#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;

    long long n;

    cin >> s;

    cin >> n;

    long long aux = 0;

    for (long long i = 0; i < s.size(); i++)
    {
        if (s[i] != '?')
        {
            aux += (long long)pow(2, s.size() - i) * (s[i] - '0');
            if (aux > n)
            {
                cout << "-1\n";
                return 0;
            }
        }
        else
        {
            if (aux + (long long)pow(2, s.size() - i) <= n)
            {
                aux += (long long)pow(2, s.size() - i);
            }
        }
    }
    cout << aux / 2 << endl;

    return 0;
}