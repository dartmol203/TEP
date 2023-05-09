#include <bits/stdc++.h>

using namespace std;

int main()
{

    string in, out;

    cin >> in;

    for (int i = 0; i < in.length(); i++)
    {
        switch (in[i])
        {
        case '1':
            out.push_back('1');
            break;

        case '0':
            out.push_back('0');
            break;
        default:
            if (!out.empty())
            {

                out.pop_back();
            }
            break;
        }
    }

    cout << out << '\n';

    return 0;
}