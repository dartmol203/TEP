#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, l, c;

    while (cin >> n >> l >> c)
    {
        string aux;
        double countL = 1, countC = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> aux;

            if (aux.size() + countC <= c)
            {
                countC += aux.size() + 1;
            }
            else
            {
                countL++;
                countC = aux.size() + 1;
            }

            // cout << countC << '\n';
        }

        // cout << '\t' << countL << ' ' << l << ' ' << countC << "\n\t";
        cout << (int)ceil(countL / l) << '\n';
    }

    return 0;
}