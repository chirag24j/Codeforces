#include <bits/stdc++.h>
using namespace std;
void banao()
{
    int n, x, flag = 1, count = 0;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        v.push_back(y);
    }
    sort(v.begin(), v.end());
    while (flag)
    {
        int temp = x;
        for (int i = 0; i < n; i++)
        {
            if (temp - v[i] > 0)
            {
                temp -= v[i];
                count++;
            }
            if (i == 0 && temp - v[i] < 0)
            {
                flag = 1;
                break;
            }
            v[i]++;
        }
    }
    cout << count << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        banao();
    }
}