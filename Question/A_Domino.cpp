#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x[n], y[n];
    int oddup = 0, odddown = 0, sumx = 0, sumy = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];

        if (x[i] % 2 != 0)
            oddup++;
        if (y[i] % 2 != 0)
            odddown++;
    }
    // sum is odd when no of odd elements is odd
    if (oddup % 2 == 0 && odddown % 2 == 0)
    {
        cout << "0";
        return 0;
    }
    else if ((oddup + odddown) % 2 != 0)
    {
        cout << "-1";
        return 0;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (x[i] % 2 == 0 && y[i] % 2 != 0)
            {
                cout << "1";
                return 0;
            }
            if (x[i] % 2 != 0 && y[i] % 2 == 0)
            {
                cout << "1";
                return 0;
            }
        }
        cout << "-1";
    }
}