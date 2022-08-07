#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    while (q--)
    {
        int i, count = 0;
        cin >> i;
        char c;
        cin >> c;
        s[i - 1] = c;
        if (s.length() < 3)
        {
            cout << "0" << endl;
        }
        else
        {
            for (int i = 0; i < s.length() - 2; i++)
            {
                if (s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'c')
                    count++;
            }
            cout << count << endl;
        }
    }
}