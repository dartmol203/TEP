#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long w, h;
    long long n;
    long long maxx = -1;
    long long minn = 999999999;
    cin >> w >> h;
    w++;
    h++;
    cin >> n;
    vector<pair<long long, long long>> morangos(n);

    for (int i = 0; i < n; i++)
    {
        cin >> morangos[i].first >> morangos[i].second;
    }

    sort(morangos.begin(), morangos.end());

    long long a, b;

    cin >> a;

    vector<long long> corteA(a);
    for (int i = 0; i < a; i++)
    {
        cin >> corteA[i];
    }

    cin >> b;

    vector<long long> corteB(b);
    for (int i = 0; i < b; i++)
    {
        cin >> corteB[i];
    }
    for (int i = 0; i < a; i++)
    {
        long long qnt = 0;

        for (int j = 0; j < b; j++)
        {
            long long l, u, r, d;
            if (i == 0)
            {
                l = 0;
            }
            else
            {
                l = corteA[i - 1];
            }
            if (j == 0)
            {
                u = 0;
            }
            else
            {
                u = corteB[j - 1];
            }

            if (j == b - 1)
            {

                d = h;
            }
            else
            {
                d = corteB[j];
            }
            if (i == a - 1)
            {
                r = w;
            }
            else
            {
                r = corteA[i];
            }
            cout << '\t' << l << ' ' << r << ' ' << u << ' ' << d << endl;
            for (int k = 0; k < n; k++)
            {
                auto aux = morangos[k];
                cout << aux.first << ' ' << aux.second << endl;
                if (aux.first > r or aux.second > d)
                    break;
                if (aux.first >= l and aux.first <= r and aux.second >= u and aux.second <= d)
                {
                    qnt++;
                }
            }
            cout << endl;
        }
        minn = min(minn, qnt);
        maxx = max(maxx, qnt);
    }

    cout << minn << ' ' << maxx << endl;
    return 0;
}