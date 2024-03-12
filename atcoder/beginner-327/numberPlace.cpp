#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<vector<int>> vet(10, vector<int>(10));

    for (int i = 0; i < 9; i++)
    {
        set<int> s;
        int sum = 0;
        for (int j = 0; j < 9; j++)
        {
            cin >> vet[i][j];
            sum += vet[i][j];
            s.insert(vet[i][j]);
        }
        if (s.size() != 9)
        {
            cout << "No\n";
            return 0;
        }
    }

    for (int i = 0; i < 9; i++)
    {
        set<int> s;
        int sum = 0;
        for (int j = 0; j < 9; j++)
        {
            sum += vet[j][i];
            s.insert(vet[j][i]);
        }
        if (s.size() != 9)
        {
            cout << "No\n";
            return 0;
        }
    }

    int sum = 0;
    {
        set<int> s;
        s.insert({vet[0][0], vet[0][1], vet[0][2], vet[1][0], vet[1][1], vet[1][2], vet[2][0], vet[2][1], vet[2][2]});
        if (s.size() != 9)
        {
            cout << "No\n";
            return 0;
        }
    }
    {
        set<int> s;
        s.insert({vet[0][3], vet[0][4], vet[0][5], vet[1][3], vet[1][4], vet[1][5], vet[2][3], vet[2][4], vet[2][5]});
        if (s.size() != 9)
        {
            cout << "No\n";
            return 0;
        }
    }
    {
        set<int> s;
        s.insert({vet[0][6], vet[0][7], vet[0][8], vet[1][6], vet[1][7], vet[1][8], vet[2][6], vet[2][7], vet[2][8]});
        if (s.size() != 9)
        {
            cout << "No\n";
            return 0;
        }
    }
    {
        set<int> s;
        s.insert({vet[3][0], vet[3][1], vet[3][2], vet[4][0], vet[4][1], vet[4][2], vet[5][0], vet[5][1], vet[5][2]});
        if (s.size() != 9)
        {
            cout << "No\n";
            return 0;
        }
    }
    {
        set<int> s;
        s.insert({vet[3][3], vet[3][4], vet[3][5], vet[4][3], vet[4][4], vet[4][5], vet[5][3], vet[5][4], vet[5][5]});
        if (s.size() != 9)
        {
            cout << "No\n";
            return 0;
        }
    }
    {
        set<int> s;
        s.insert({vet[3][6], vet[3][7], vet[3][8], vet[4][6], vet[4][7], vet[4][8], vet[5][6], vet[5][7], vet[5][8]});
        if (s.size() != 9)
        {
            cout << "No\n";
            return 0;
        }
    }
    {
        set<int> s;
        s.insert({vet[6][0], vet[6][1], vet[6][2], vet[7][0], vet[7][1], vet[7][2], vet[8][0], vet[8][1], vet[8][2]});
        if (s.size() != 9)
        {
            cout << "No\n";
            return 0;
        }
    }
    {
        set<int> s;
        s.insert({vet[6][3], vet[6][4], vet[6][5], vet[7][3], vet[7][4], vet[7][5], vet[8][3], vet[8][4], vet[8][5]});
        if (s.size() != 9)
        {
            cout << "No\n";
            return 0;
        }
    }
    {
        set<int> s;
        s.insert({vet[6][6], vet[6][7], vet[6][8], vet[7][6], vet[7][7], vet[7][8], vet[8][6], vet[8][7], vet[8][8]});
        if (s.size() != 9)
        {
            cout << "No\n";
            return 0;
        }
    }

    cout << "Yes\n";
    return 0;
}