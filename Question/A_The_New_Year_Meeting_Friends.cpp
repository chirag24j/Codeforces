#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int arr[] = {x1, x2, x3};
    sort(arr, arr + 3);
    int sum = 0;
    sum += abs(arr[1] - arr[0]);
    sum += abs(arr[2] - arr[1]);
    cout << sum << endl;
}
