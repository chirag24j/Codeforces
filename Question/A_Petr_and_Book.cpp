#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }
    int temp = 0;
    while (true)
    {
        for (int i = 0; i < 7; i++)
        {
            n -= arr[i];
            if (n <= 0)
            {
                temp = i + 1;
                break;
            }
        }
        if (n <= 0)
            break;
    }
    cout << temp;
}