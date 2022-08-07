#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int m = n / 3;
        int countt = 0, flag = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'T')
                countt += 1;
            else
                countt -= 1;
            if (m < countt || countt < 0)
            {
                flag = 1;
                break;
            }
        }
        if (m == countt)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}