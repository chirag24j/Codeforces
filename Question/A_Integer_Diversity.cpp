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
        int freq[101] = {0};
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x != 0)
                freq[abs(x)] += 1;
            arr[i] = x;
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                count = 1;
                break;
            }
        }
        for (int i = 1; i < 101; i++)
        {
            if (freq[i] > 1)
                count += 2;
            else if (freq[i] == 1)
                count += 1;
        }
        cout << count << endl;
    }
}