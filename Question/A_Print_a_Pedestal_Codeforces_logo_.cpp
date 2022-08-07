#include <bits/stdc++.h>
using namespace std;
void banao()
{
    int n;
    cin >> n;
    int a = 0, b = 0, c = 0;
    a = ceil(n / 3.0);
    b = a + 1;
    if (n - (a + b) == 0)
    {
        a--;
        c = a - 1;
    }
    else
    {
        c = n - (a + b);
    }
    cout << a << " " << b << " " << c << endl;
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
