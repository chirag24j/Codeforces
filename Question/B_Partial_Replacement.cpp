#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, count1 = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        int firstIndex = 0, lastIndex = 0, count = 0;
        if (n == 1)
        {
            if (s[0] == '*')
                cout << "1" << endl;
            else
                cout << "0" << endl;
            return 0;
        }
        for (int i = 0; n; i++)
        {
            if (s[i] == '*')
            {
                s[i] = 'x';
                count++;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '*')
            {
                s[i] = 'x';
                count++;
                break;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
                continue;
            if (s[i] == 'x')
            {
                bool temp = false;
                for (int j = 1; j <= k; j++)
                {
                    if (i + j < n && s[i + j] == 'x')
                    {
                        temp = true;
                        break;
                    }
                    else if (i + j >= n)
                    {
                        temp = true;
                        break;
                    }
                }
                if (temp == false)
                {
                    for (int j = i + k; j > i; j--)
                    {
                        if (j < n && s[j] == '*')
                        {
                            s[j] = 'x';
                            count++;
                            break;
                        }
                    }
                }
            }
        }

        cout << count << endl;
    }
}
