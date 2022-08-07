#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int temp1, temp2;
        temp1 = min(n, m);
        temp2 = max(n, m);
        int output = floor((n + m) / 2);
        for (int i = 0; i < n * m; i++)
        {
            if (i == 1 || i == 0)
                cout << output << " ";
            else if ((temp2 % i == 0 && temp2 > i) || (i % temp2 == 0 && i > temp2))
            {
                output++;
                cout << output << " ";
            }
            else
                cout << output << " ";
        }
        cout << endl;
    }
}