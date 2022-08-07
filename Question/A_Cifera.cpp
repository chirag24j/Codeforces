#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int k, l;
    cin >> k >> l;
    long long int temp = 1;
    long long int i = 0;
    long long int temp2 = k;
    if (k == l)
    {
        cout << "YES" << endl;
        cout << "0";
        return 0;
    }
    while (temp)
    {
        i++;
        k = k * temp2;
        if (k == l)
        {
            cout << "YES" << endl;
            cout << i;
            return 0;
        }
        else if (k > l)
        {
            cout << "NO";
            return 0;
        }
        else
            continue;
    }
}