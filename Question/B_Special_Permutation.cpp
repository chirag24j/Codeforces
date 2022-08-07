#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> l = {a}, r = {b};
        if (a == b)
            cout << "-1" << endl;
        else if (a < b)
        {
            for (int i = 1; i < a; i++)
                r.push_back(i);
            for (int i = b + 1; i <= n; i++)
                l.push_back(i);
            if (l.size() > n / 2 || r.size() > n / 2)
                cout << "-1" << endl;
            else
            {
                int temp = a + 1;
                while (l.size() != n / 2)
                {
                    l.push_back(temp);
                    temp++;
                }
                while (r.size() != n / 2)
                {
                    r.push_back(temp);
                    temp++;
                }
                if (l.size() > n / 2 || r.size() > n / 2)
                    cout << "-1" << endl;
                else
                {
                    for (auto i = l.begin(); i != l.end(); i++)
                        cout << *i << " ";
                    for (auto i = r.begin(); i != r.end(); i++)
                        cout << *i << " ";
                    cout << endl;
                }
            }
        }
        else
        {
            if (a == n / 2 + 1 && b == n / 2)
            {
                for (int i = n; i >= 1; i--)
                {
                    cout << i << " ";
                }
                cout << endl;
            }
            else
                cout << "-1" << endl;
        }
    }
}