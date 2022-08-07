#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int x[k];
        for (int i = 0; i < k; i++)
            cin >> x[i];
        sort(x, x + k);
        int cat = 0, count = 0;
        for (int i = k - 1; i >= 0; i--)
        {
            if (cat >= x[i])
                break;
            else
            {
                cat += n - x[i];
                count++;
            }
        }
        cout << count << endl;
    }
}