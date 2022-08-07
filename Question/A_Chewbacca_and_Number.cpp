#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x;
    cin >> x;
    string s, temp;
    temp = to_string(x);
    long long int n = temp.length();
    if (n == 1 && x == 9)
    {
        cout << x << endl;
    }
    else
    {
        long long int c = 0;
        while (x > 0)
        {
            long long int y = x % 10;
            if (temp.length() == 1 && y == 9)
            {
                s += to_string(y);
                break;
            }
            if (y > 9 - y)
                c = 9 - y;
            else
                c = y;
            s += to_string(c);
            x /= 10;
            temp.pop_back();
        }
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
}