#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, t;
    long long w, sum;
    int flag;

    cin >> t;

    vector<pair<long long, long long>> vet(200001);
    while (t--)
    {
        // cout << "opa\n";
        sum = flag = 0;

        cin >> n >> w;
        stack<pair<long long, long long>> q;
        // cout << "opa2\n";
        long long aux;
        for (long long i = 0; i < n; i++)
        {
            cin >> aux;
            vet[i] = {aux, i + 1};
        }

        sort(vet.begin(), vet.begin() + n);

        // for (int i = 0; i < n; i++)
        //{
        //     cout << "\t" << vet[i].first;
        // }

        // cout << "\n\n";
        long long half;
        if ((w & 1) == 0)
        {

            half = w / 2;
        }
        else
        {
            half = w / 2 + 1;
        }
        for (long long i = n - 1; i >= 0; i--)
        {
            // cout << '\t' << sum << ' ' << vet[i].first << endl;
            if (sum + vet[i].first <= w)
            {
                sum += vet[i].first;
                q.push(vet[i]);
                if (sum >= half)
                {
                    cout << q.size() << '\n';
                    while (!q.empty())
                    {
                        cout << q.top().second << ' ';
                        q.pop();
                    }
                    cout << endl;
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
        {
            cout << -1 << '\n';
        }
    }

    return 0;
}