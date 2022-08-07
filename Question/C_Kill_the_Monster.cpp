#include <bits/stdc++.h>
using namespace std;
void banao()
{
    long long int hc, dc, hm, dm, k, w, a, flag = 0;
    cin >> hc >> dc >> hm >> dm >> k >> w >> a;
    long long int x = ceil((1.0 * hc) / (1.0 * dm));
    long long int y = ceil((1.0 * hm) / (1.0 * dc));
    if (y <= x)
    {
        cout << "YES" << endl;
        return;
    }
    for (long long int i = 0; i <= k; i++)
    {
        long long int temp1 = ceil(((hc + i * a) * 1.0) / (dm * 1.0));
        long long int temp2 = ceil((hm * 1.0) / ((dc + ((k - i) * w)) * 1.0));
        if (temp2 <= temp1)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        banao();
    }
}