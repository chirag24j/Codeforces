#include <bits/stdc++.h>
using namespace std;
void banao()
{
    string s;
    cin >> s;
    int n = s.length();
    int alice = 0, bob = 0;
    for (int i = 0; i < n; i++)
    {
        alice += s[i] - 'a' + 1;
    }
    if (n % 2)
    {
        bob = min(s[0] - 'a' + 1, s[n - 1] - 'a' + 1);
    }
    alice -= bob;
    if (alice > bob)
    {
        cout << "Alice " << alice - bob << "\n";
    }
    else
    {
        cout << "Bob " << bob - alice << "\n";
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