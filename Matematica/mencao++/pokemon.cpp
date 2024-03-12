#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long l;
    long long sts[4];
    long long b, iv, ev;

    cin >> l;

    cin >> b >> iv >> ev;
    sts[0] = (iv + b + sqrt(ev) / 8 + 50) * l / 50 + 10;
    cin >> b >> iv >> ev;
    sts[1] = (iv + b + sqrt(ev) / 8) * l / 50 + 5;
    cin >> b >> iv >> ev;
    sts[2] = (iv + b + sqrt(ev) / 8) * l / 50 + 5;
    cin >> b >> iv >> ev;
    sts[3] = (iv + b + sqrt(ev) / 8) * l / 50 + 5;

    cout << sts[0] << ' ' << sts[1] << ' ' << sts[2] << ' ' << sts[3] << '\n';
    return 0;
}