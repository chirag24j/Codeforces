#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max, min, maxpos = 0, minpos = 0, temp = 0;
    max = arr[0];
    min = arr[1];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxpos = i;
        }

        if (arr[i] <= min)
        {
            min = arr[i];
            minpos = i;
        }
    }
    if (max == arr[0] && min == arr[n - 1])
    {
        cout << "0";
    }
    else if (maxpos < minpos)
    {
        temp = ((n - 1) - minpos) + maxpos;
        cout << temp;
    }
    else
    {
        temp = ((n - 1) - minpos) + (maxpos - 1);
        cout << temp;
    }
}