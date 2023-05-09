#include <bits/stdc++.h>
using namespace std;

int findsum(string s, int size, int split)
{
    unordered_set<char> stringA, stringB;
    for (int i = 0; i < split; i++)
    {
        stringA.insert(s[i]);
    }
    for (int i = split; i < size; i++)
    {
        stringB.insert(s[i]);
    }

    return stringA.size() + stringB.size();
}

int main()
{

    int qnt;
    int size;
    string inp;

    scanf("%d ", &qnt);
    for (int i = 0; i < qnt; i++)
    {
        scanf("%d ", &size);
        cin >> inp;
        int maior = 0;
        for (int j = 0; j < size; j++)
        {
            findsum(inp, size, j);
            maior = max(maior, findsum(inp, size, j));

            if (maior == size)
            {
                break;
            }
        }
        printf("%d\n", maior);
    }

    return 0;
}