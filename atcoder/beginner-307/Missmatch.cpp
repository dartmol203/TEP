#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    string s;

    cin >> n;
    cin >> s;

    vector<int> vet(n, 0);
    pair<int, int> p = {-1, -1};
    stack<int> pilha;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            pilha.push(i);
        }
        if (s[i] == ')')
        {
            if (!pilha.empty())
            {
                int aux = pilha.top();
                pilha.pop();
                for (int j = aux; j <= i; j++)
                {
                    if (j == p.first)
                    {
                        j = p.second;
                    }
                    else
                    {
                        vet[j] = 1;
                    }
                }
                p = {aux, i};
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (vet[i] == 0)
        {
            cout << s[i];
        }
    }
    cout << endl;
    return 0;
}