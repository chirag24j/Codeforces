#include <bits/stdc++.h>
using namespace std;
void banao()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string temp;
    temp = s;
    sort(temp.begin(), temp.end());
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != temp[i])
        {
            v.push_back(i + 1);
        }
    }
    if (v.size() == 0)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << "1" << endl;
        cout << v.size() << " ";
        for (auto x : v)
            cout << x << " ";
        cout << endl;
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