#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    priority_queue<int> heap;

    int qnt, novo;

    scanf("%d", &qnt);

    char input[3];

    for (int i = 0; i < qnt; i++)
    {
        scanf("%s ", input);
        if (input[0] == '+')
        {
            scanf("%d ", &novo);
            heap.push(novo * -1);
        }
        else
        {
            if (!heap.empty())
            {

                printf("%d\n", heap.top() * -1);
                heap.pop();
            }
            else
            {
                printf("-1\n");
            }
        }
    }

    return 0;
}