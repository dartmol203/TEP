#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t, b, n, i = 1, ans;

    cin >> t;

    while (t--)
    {
        cin >> b >> n;
        ans = b + 100 * (n - 3);

        if (n > 3)
        {
            if (n > 7)
            {
                ans *= 1.5;
            }
            else
            {
                ans *= 1.25;
            }
        }
        cout << "Caso " << i << ": " << ans << (ans == 1 ? " ponto\n" : " pontos\n");
        i++;
    }
    return 0;
}