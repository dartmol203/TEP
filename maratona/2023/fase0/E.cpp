#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long n;

    cin >> n;

    vector<long long> palpite(n), erro(n);

    for (int i = 0; i < n; i++)
    {
        cin >> palpite[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> erro[i];
    }

    long long ans1 = 0, ans2 = 0;
    for (int i = 0; i < n; i++)
    {
        vector<long long> usado(n, 0);
        usado[i] = 1;
        ans1 = palpite[0] - erro[i];
        long long flag = 1;
        for (int j = 1; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if ((palpite[j] - erro[k] == ans1 or palpite[j] + erro[k] == ans1) and usado[k] == 0)
                {
                    usado[k] = 1;
                    flag++;
                    break;
                }
            }
        }
        if (flag == n)
        {
            break;
        }
        else
        {
            ans1 = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        vector<long long> usado(n, 0);
        usado[i] = 1;
        ans2 = palpite[0] + erro[i];
        long long flag = 1;
        for (int j = 1; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if ((palpite[j] - erro[k] == ans1 or palpite[j] + erro[k] == ans1) and usado[k] == 0)
                {
                    usado[k] = 1;
                    flag++;
                    break;
                }
            }
        }
        if (flag == n)
        {
            break;
        }
        else
        {
            ans2 = 0;
        }
    }
    if (ans1 != 0 and ans2 != 0)
    {
        cout << min(ans1, ans2) << endl;

        cout << max(ans1, ans2) << endl;
    }
    else
    {
        if (ans1 != 0)
        {
            cout << ans1 << endl;
        }
        else
        {
            cout << ans2 << endl;
        }
    }
    return 0;
}