#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    vector<int> vet;
    int qntNum, aux;

    cin >> qntNum;
    for (int i = 0; i < qntNum; i++)
    {
        cin >> aux;
        vet.push_back(aux);
    }
    sort(vet.begin(), vet.end());
    for (int i = 0; i < qntNum; i++)
    {
        cout << vet.at(i) << endl;
    }

    return 0;
}