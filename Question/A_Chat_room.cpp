#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string temp = "hello";
    int j = 0, count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == temp[j])
        {
            count++;
            j++;
        }
    }
    if (count == 5)
        cout << "YES";
    else
        cout << "NO";
}