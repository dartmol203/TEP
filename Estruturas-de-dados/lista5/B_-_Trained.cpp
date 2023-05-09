#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    scanf("%d", &n);
    vector<int> vet;
    for (int i = 0; i < n; i++)
    {
        int input;
        scanf("%d", &input);
        input--;
        vet.push_back(input);
    }
    int atual = 0, c = 0;
    for (;;)
    {
        if (atual == 1)
        {
            printf("%d\n", c);
            break;
        }
        if (c >= n)
        {
            printf("-1\n");
            break;
        }
        c++;
        atual = vet[atual];
    }
}
