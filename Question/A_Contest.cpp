#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int temp1 = max((3 * a) / 10, a - (a / 250) * c);
    int temp2 = max((3 * b) / 10, b - (b / 250) * d);
    if (temp1 > temp2)
        cout << "Misha";
    else if (temp1 < temp2)
        cout << "Vasya";
    else
        cout << "Tie";
}