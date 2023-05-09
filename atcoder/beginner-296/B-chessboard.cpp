#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<string> s;

    string x;

    int posx, posy;

    for (int i = 0; i < 8; i++)
    {
        cin >> x;
        int pos = x.find('*');
        if (pos != -1)
        {
            posy = pos;
            posx = i;
        }
    }

    char out = 'a' + posy;
    cout << out << 8 - posx << '\n';

    return 0;
}