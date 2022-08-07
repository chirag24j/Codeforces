#include <bits/stdc++.h>
using namespace std;
void banao()
{
    int n;
    cin >> n;
    if (n == 1)
        cout << "1" << endl;
    else if (n == 2)
        cout << "-1" << endl;
    else
    {
        int x = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                if (x <= n * n)
                {
                    cout << x << " ";
                    x += 2;
                }
                else
                {
                    x = 2;
                    j--;
                }
            cout << endl;
        }
    }
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