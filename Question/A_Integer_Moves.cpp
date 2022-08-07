#include <bits/stdc++.h>
using namespace std;
void banao()
{
    int x, y;
    cin >> x >> y;
    int temp = x * x + y * y;
    int temp2 = 0;
    while (temp2 * temp2 < temp)
        temp2++;
    if (x == 0 && y == 0)
        cout << "0\n";
    else if (temp2 * temp2 == temp)
        cout << "1\n";
    else
        cout << "2\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        banao();
    }
}