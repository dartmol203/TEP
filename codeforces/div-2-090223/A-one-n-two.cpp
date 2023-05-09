#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        vector<int> v;
        int sum = 0;
        int size, flag = 0;
        cin >> size;

        for (int i = 0; i < size; i++)
        {
            int x;
            cin >> x;
            if (x == 2)
            {
                sum++;
            }
            v.push_back(sum);
        }

        for (int i = 0; i < size; i++)
        {
            if (v[i] == v[size - 1] - v[i])
            {
                cout << i + 1 << '\n';
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << -1 << '\n';
        }
    }

    return 0;
}