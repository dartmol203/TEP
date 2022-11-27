#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int qnt, querry;
    string partA[20];
    string partB[20];
    string myString;

    cin >> qnt;
    cin.ignore();
    for (int i = 0; i < qnt; i++)
    {
        getline(cin, partA[i]);
        getline(cin, partB[i]);
    }
    cin >> querry;
    cin.ignore();
    for (int j = 0; j < querry; j++)
    {
        getline(cin, myString);
        for (int i = 0; i < qnt; i++)
        {
            if (myString.compare(partA[i]) == 0)
            {
                cout << partB[i] << endl;
            }
        }
    }

    return 0;
}