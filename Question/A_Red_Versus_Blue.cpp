#include <bits/stdc++.h>
using namespace std;
void banao()
{
    int n, r, b;
    cin >> n >> r >> b;
    string s;
    int temp = r / (b + 1);
    int temp2 = r % (b + 1);
    for (int i = 0; i < b + 1 - temp2; i++)
    {
        string str(temp, 'R');
        s += str;
        s += 'B';
    }
    for (int i = 0; i < temp2; i++)
    {
        string str(temp + 1, 'R');
        s += str;
        s += 'B';
    }
    s.pop_back();
    cout << s << endl;
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