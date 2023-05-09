#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int> lista;

    int qnt;

    scanf("%d", &qnt);

    for (int i = 0; i < qnt; i++)
    {
        int num;
        scanf("%d ", &num);
        lista.insert(num);
    }

    printf("%ld\n", lista.size());

    return 0;
}