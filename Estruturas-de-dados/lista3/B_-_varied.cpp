#include <stdio.h>
#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main()
{

    char str[30];

    set<char> cont;

    scanf("%s ", str);
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        cont.insert(str[i]);
    }

    if (cont.size() == len)
        printf("yes\n");
    else
        printf("no\n");

    return 0;
}
