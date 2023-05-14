#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    size_t x;
    while (cin >> x, x != -1)
    {
        string s, t;
        cin >> s >> t;

        int erros = 0;
        for (size_t i = 0; i < t.size() && erros <= 6 && s != ""; ++i)
        {
            if (s.find(t[i]) != string::npos)
            {
                // Remove all t[i] in s.
                s.erase(remove(s.begin(), s.end(),
                               t[i]),
                        s.end());
            }
            else
                ++erros;
        }
        cout << "Round " << x << endl;
        if (erros == 7)
            cout << "You lose." << endl;
        else if (s == "")
            cout << "You win." << endl;
        else
            cout << "You chickened out." << endl;
    }
    return 0;
}