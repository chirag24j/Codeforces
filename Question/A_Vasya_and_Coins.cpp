#include <bits/stdc++.h>
using namespace std;
void banao()
{
    long long a, b;
    cin >> a >> b;
    if (a == 0)
        cout << 1 << endl;
    else
        cout << (2 * b) + a + 1 << endl;
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