#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> casas;
    int min = 0, max = 0, N, input;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> input;
        if (!casas.empty())
        {
            casas.push_back(input);
            min = std::min(input, min);
            max = std::max(input, max);
        }
        else
        {
            casas.push_back(input);
            min = std::min(input, casas.back());
            max = std::max(input, casas.back());
        }
    }

    cout << (max - min) << endl;

    return 0;
}