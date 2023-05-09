#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {

        int n, x, qntOdd = 0, qntEven = 0;
        cin >> n;
        vector<int> odd, even;
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            if (x % 2 == 0)
            {
                even.push_back(x);
                qntEven += x;
            }
            else
            {
                odd.push_back(x);
                qntOdd += x;
            }
        }

        if (qntOdd >= qntEven)
        {
            cout << "no\n";
        }
        else
        {
            /*
            sort(odd);
            sort(even);
            int qntM = 0, qntB = 0;
            */
            cout << "yes\n";
        }
    }
    return 0;
}