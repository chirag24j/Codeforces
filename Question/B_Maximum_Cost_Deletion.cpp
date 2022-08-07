#include <bits/stdc++.h>
using namespace std;
void banao()
{
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    if (b >= 0)
    {
        cout << a * n + b * n << endl;
    }
    else
    {
        int count = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
                count++;
        }
        cout << a * n + b * (count / 2 + 1) << endl;
    }
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