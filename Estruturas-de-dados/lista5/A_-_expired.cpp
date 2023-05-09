#include <iostream>

using namespace std;

int main(void)
{
    int X, A, B, seguro = 0, time;

    cin >> X >> A >> B;

    time = seguro - A + B;

    if (time <= seguro)
    {
        cout << "delicious" << endl;
    }
    else if (time < X + 1)
    {
        cout << "safe" << endl;
    }
    else
    {
        cout << "dangerous" << endl;
    }

    return 0;
}