#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0, output = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        s = to_string(arr[i]);
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == '4' || s[j] == '7')
                count++;
        }
        if (count <= k)
            output++;
        count = 0;
    }
    cout << output;
}