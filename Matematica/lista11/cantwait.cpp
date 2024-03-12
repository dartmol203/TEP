#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<string> v = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

    string s;
    cin >> s;

    int i;

    for (i = 0; i < 7; i++)
    {
        if (s == v[i])
        {
            break;
        }
    }
    cout << 7 - i << "\n";

    return 0;
}