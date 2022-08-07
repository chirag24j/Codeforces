#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        bool f;
        if (n % 2)
            cout << "NO" << endl;
        else
        {
            float a, a1;
            a = n / 2;
            f = true;
            if (n % 4)
                f = false;
            a1 = sqrt(a);
            if (int(a1) == a1)
                cout << "YES" << endl;
            else
            {
                if (f)
                {
                    a = n / 4;
                    a1 = sqrt(a);
                    if (int(a1) == a1)
                        cout << "YES" << endl;
                    else
                        cout << "NO" << endl;
                }
                else
                    cout << "NO" << endl;
            }
        }
    }
}