#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int age;
    long int qnt;
    string btype;

    set<pair<int, string>> doadores;

    scanf("%ld ", &qnt);

    for (long int i = 0; i < qnt; i++)
    {

        cin >> age;
        cin >> btype;

        doadores.insert({age, btype});
    }

    printf("%ld\n", doadores.size());
}