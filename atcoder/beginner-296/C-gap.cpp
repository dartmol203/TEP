#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, X;

    vector<int> s;

    cin >> N >> X;

    for (int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        s.push_back(tmp);
    }

    if (X == 0)
    {
        cout << "Yes\n";
        return 0;
    }
    else
    {
        // sort(s.begin(), s.end());
        //  cout << '\t' << s[N - 1];
        //  if(s[N-1] <=0);
        for (int i = N; i > 0; i--)
        {
            for (int j = i - 1; j > 0; j--)
            {
                if (s[i - 1] - s[j - 1] == X)
                {
                    cout << "Yes\n";
                    return 0;
                }
            }
        }
    }

    cout << "No\n";
    return 0;
}