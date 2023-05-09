#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m;

    cin >> n >> m;

    while (n != 0 and m != 0)
    {

        set<int> s;

        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            s.insert(x);
        }

        for (int i = 0; i < m; i++)
        {
            cin >> x;
            s.insert(x);
        }

        cout << m + n - s.size() << endl;

        cin >> n >> m;
    }

    return 0;
}