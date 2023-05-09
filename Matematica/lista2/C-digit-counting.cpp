#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<vector<int>> respostas(10001, vector<int>(10));
    for (int i = 1; i <= 10000; i++)
    {
        respostas[i] = respostas[i - 1];
        int n = i;
        while (n != 0)
        {
            int val = n % 10;
            n /= 10;
            respostas[i][val]++;
        }
    }
    int t, v;
    cin >> t;
    while (t--)
    {
        cin >> v;
        for (auto &val : respostas[v])
        {
            cout << val;
            if (&val == &respostas[v].back())
                cout << '\n';
            else
                cout << ' ';
        }
    }

    return 0;
}