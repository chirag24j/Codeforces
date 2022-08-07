#include <bits/stdc++.h>
using namespace std;
void banao()
{
    int d;
    cin >> d;
    d = d * 2 + 1;
    cout << (d * (d + 1)) / 2 << endl;
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