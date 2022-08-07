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
        string s = to_string(n);
        string str = s;
        reverse(s.begin(), s.end());
        int temp = stoi(s);
        if (str.length() == 1 && n % 2 != 0)
            cout << "-1" << endl;
        else if (n % 2 == 0)
            cout << "0" << endl;
        else
        {
            int flag = 0, count = 0;
            while (temp > 0)
            {
                int temp2 = temp % 10;
                count++;
                if (temp2 % 2 == 0)
                {
                    flag = 1;
                    break;
                }
                else
                {
                    temp /= 10;
                }
            }
            if (flag == 1)
            {
                if (count != 1)
                    cout << "2" << endl;
                else
                    cout << "1" << endl;
            }
            else
                cout << "-1" << endl;
        }
    }
}