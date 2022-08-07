#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count = 0;
    map<char, int> cj;
    for (int i = 0; i < s.length(); i++)
    {
        cj[s[i]]++;
    }
    for (auto i : cj)
    {
        if (i.second != 0)
        {
            count++;
        }
    }
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}