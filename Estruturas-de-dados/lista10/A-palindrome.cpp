#include <iostream>

using namespace std;
int main()
{

    string input;

    cin >> input;

    if (input[0] == input[2])
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}
