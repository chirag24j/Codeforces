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
        int count1 = floor(n / 2);
        int count2 = 0;
        sort(arr, arr + n);
        for (int i = 1; i < n; i++)
        {
            if (count2 < count1)
            {
                count2++;
                cout << arr[i] << " " << arr[0] << endl;
            }
        }
    }
}