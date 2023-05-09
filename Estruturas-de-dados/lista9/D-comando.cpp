#include <iostream>
#include <algorithm>
#define MAXN 1001

using namespace std;

struct solider
{
    int give;
    int work;
} soliders[MAXN];

bool cmp(solider a, solider b)
{
    if (a.work > b.work)
    {
        return true;
    }
    return false;
}

int main()
{
    int case_number = 1;
    int n;
    cin >> n;
    while (n != 0)
    {
        int giveSum = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> soliders[i].give >> soliders[i].work;
        }
        sort(soliders, soliders + n, cmp);
        for (int i = 0; i < n; i++)
        {
            giveSum += soliders[i].give;
            if (giveSum + soliders[i].work > ans)
            {
                ans = giveSum + soliders[i].work;
            }
        }
        cout << "Case " << case_number << ": " << ans << '\n';
        case_number++;
        cin >> n;
    }
    return 0;
}