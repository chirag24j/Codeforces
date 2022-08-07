#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        if (n != arr[0] && arr[n - 1] != n)
        {
            cout << "-1" << endl;
        }
        else
        {
            for (int i = n - 1; i >= 0; i--)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
}
