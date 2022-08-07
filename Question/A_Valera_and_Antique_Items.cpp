#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, v, k, i = 0, x;
    cin >> n >> v;
    int arr[51], flag = 1;
    int z = 1;
    while (n--)
    {
        cin >> k;
        flag = 1;
        for (int j = 0; j < k; j++)
        {
            cin >> x;
            if (flag && v > x)
            {
                flag = 0;
                arr[i] = z;
                i++;
            }
        }
        z++;
    }
    cout << i << endl;
    for (int j = 0; j < i; j++)
    {

        cout << arr[j] << " ";
    }
}