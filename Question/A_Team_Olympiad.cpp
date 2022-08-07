#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, one = 0, two = 0, three = 0;
    cin >> n;
    int t[n];
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    int arr1[5000], arr2[5000], arr3[5000];
    for (int i = 0; i < n; i++)
    {
        if (t[i] == 1)
        {
            arr1[one] = i + 1;
            one++;
        }
        else if (t[i] == 2)
        {
            arr2[two] = i + 1;
            two++;
        }
        else if (t[i] == 3)
        {
            arr3[three] = i + 1;
            three++;
        }
    }
    int ans = min(one, min(two, three));
    cout << ans << endl;
    for (one = 0, two = 0, three = 0; one < ans, two < ans, three < ans; one++, two++, three++)
    {
        cout << arr1[one] << " " << arr2[two] << " " << arr3[three] << endl;
    }
}