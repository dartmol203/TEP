#include <bits/stdc++.h>

using namespace std;

int main()
{

    int h, w;

    cin >> h >> w;

    vector<string> v(h);

    for (int i = 0; i < h; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            // cout << i << ' ' << j << endl;
            if (v[i][j] == 's')
            {
                string aux = "";
                if (i + 4 < h)
                {
                    // cout << "opa\n";
                    aux.push_back(v[i][j]);
                    aux.push_back(v[i + 1][j]);
                    aux.push_back(v[i + 2][j]);
                    aux.push_back(v[i + 3][j]);
                    aux.push_back(v[i + 4][j]);
                    // cout << '\t' << i << ' ' << j << aux << endl;
                    if (aux == "snuke")
                    {
                        i++;
                        j++;
                        cout << i << ' ' << j << endl;
                        cout << i + 1 << ' ' << j << endl;
                        cout << i + 2 << ' ' << j << endl;
                        cout << i + 3 << ' ' << j << endl;
                        cout << i + 4 << ' ' << j << endl;
                        return 0;
                    }
                    // cout << "opa2\n";
                }
                aux = "";
                if (i - 4 >= 0)
                {
                    // cout << "opa3\n";
                    aux.push_back(v[i][j]);
                    aux.push_back(v[i - 1][j]);
                    aux.push_back(v[i - 2][j]);
                    aux.push_back(v[i - 3][j]);
                    aux.push_back(v[i - 4][j]);
                    // cout << '\t' << i << ' ' << j << aux << endl;
                    if (aux == "snuke")
                    {
                        i++;
                        j++;

                        cout << i << ' ' << j << endl;
                        cout << i - 1 << ' ' << j << endl;
                        cout << i - 2 << ' ' << j << endl;
                        cout << i - 3 << ' ' << j << endl;
                        cout << i - 4 << ' ' << j << endl;
                        return 0;
                    }
                }
                aux = "";
                if (j + 4 < w)
                {
                    aux.push_back(v[i][j]);
                    aux.push_back(v[i][j + 1]);
                    aux.push_back(v[i][j + 2]);
                    aux.push_back(v[i][j + 3]);
                    aux.push_back(v[i][j + 4]);
                    // cout << '\t' << i << ' ' << j << aux << endl;
                    if (aux == "snuke")
                    {
                        i++;
                        j++;

                        cout << i << ' ' << j << endl;
                        cout << i << ' ' << j + 1 << endl;
                        cout << i << ' ' << j + 2 << endl;
                        cout << i << ' ' << j + 3 << endl;
                        cout << i << ' ' << j + 4 << endl;
                        return 0;
                    }
                }
                aux = "";
                if (j - 4 >= 0)
                {
                    //    cout << "opa4\n";
                    aux.push_back(v[i][j]);
                    aux.push_back(v[i][j - 1]);
                    aux.push_back(v[i][j - 2]);
                    aux.push_back(v[i][j - 3]);
                    aux.push_back(v[i][j - 4]);
                    //  cout << '\t' << i << ' ' << j << aux << endl;
                    if (aux == "snuke")
                    {
                        i++;
                        j++;

                        cout << i << ' ' << j << endl;
                        cout << i << ' ' << j - 1 << endl;
                        cout << i << ' ' << j - 2 << endl;
                        cout << i << ' ' << j - 3 << endl;
                        cout << i << ' ' << j - 4 << endl;
                        return 0;
                    }
                    // cout << "opa5\n";
                }
                aux = "";
                if (i + 4 < h and j + 4 < w)
                {
                    // co//ut << "opa6\n";
                    aux.push_back(v[i][j]);
                    aux.push_back(v[i + 1][j + 1]);
                    aux.push_back(v[i + 2][j + 2]);
                    aux.push_back(v[i + 3][j + 3]);
                    aux.push_back(v[i + 4][j + 4]);
                    // cout << '\t' << i << ' ' << j << aux << endl;
                    if (aux == "snuke")
                    {
                        i++;
                        j++;

                        cout << i << ' ' << j << endl;
                        cout << i + 1 << ' ' << j + 1 << endl;
                        cout << i + 2 << ' ' << j + 2 << endl;
                        cout << i + 3 << ' ' << j + 3 << endl;
                        cout << i + 4 << ' ' << j + 4 << endl;
                        return 0;
                    }
                    // cout << "opa7\n";
                }
                aux = "";
                if (i + 4 < h and j - 4 >= 0)
                {
                    // cout << "opa8\n";
                    aux.push_back(v[i][j]);
                    aux.push_back(v[i + 1][j - 1]);
                    aux.push_back(v[i + 2][j - 2]);
                    aux.push_back(v[i + 3][j - 3]);
                    aux.push_back(v[i + 4][j - 4]);
                    // cout << '\t' << i << ' ' << j << aux << endl;
                    if (aux == "snuke")
                    {
                        i++;
                        j++;

                        cout << i << ' ' << j << endl;
                        cout << i + 1 << ' ' << j - 1 << endl;
                        cout << i + 2 << ' ' << j - 2 << endl;
                        cout << i + 3 << ' ' << j - 3 << endl;
                        cout << i + 4 << ' ' << j - 4 << endl;
                        return 0;
                    }
                    // cout << "opa9\n";
                }
                aux = "";
                if (i - 4 >= 0 and j + 4 < w)
                {
                    // cout << "opa12\n";
                    //  cout << "opa10\n";
                    aux.push_back(v[i][j]);
                    aux.push_back(v[i - 1][j + 1]);
                    aux.push_back(v[i - 2][j + 2]);
                    aux.push_back(v[i - 3][j + 3]);
                    aux.push_back(v[i - 4][j + 4]);
                    // cout << "opa11\n";
                    // cout << '\t' << i << ' ' << j << aux << endl;
                    if (aux == "snuke")
                    {
                        i++;
                        j++;

                        cout << i << ' ' << j << endl;
                        cout << i - 1 << ' ' << j + 1 << endl;
                        cout << i - 2 << ' ' << j + 2 << endl;
                        cout << i - 3 << ' ' << j + 3 << endl;
                        cout << i - 4 << ' ' << j + 4 << endl;
                        return 0;
                    }
                }
                aux = "";
                // cout << '\t' << i << ' ' << j << endl;
                if (i - 4 >= 0 and j - 4 >= 0)
                {
                    aux.push_back(v[i][j]);
                    aux.push_back(v[i - 1][j - 1]);
                    aux.push_back(v[i - 2][j - 2]);
                    aux.push_back(v[i - 3][j - 3]);
                    aux.push_back(v[i - 4][j - 4]);

                    // cout << '\t' << i << ' ' << j << aux << endl;
                    if (aux == "snuke")
                    {
                        i++;
                        j++;

                        cout << i << ' ' << j << endl;
                        cout << i - 1 << ' ' << j - 1 << endl;
                        cout << i - 2 << ' ' << j - 2 << endl;
                        cout << i - 3 << ' ' << j - 3 << endl;
                        cout << i - 4 << ' ' << j - 4 << endl;
                        return 0;
                    }
                    // cout << "opa13\n";
                }
            }
        }
    }

    return 0;
}