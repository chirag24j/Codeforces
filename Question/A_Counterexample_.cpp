#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int l, r, temp = 0;
    cin >> l >> r;
    long long int range = r - (l - 1);
    if (range < 3 || l % 2 == 1 && range < 4)
        cout << "-1" << endl;
    else if (l % 2 == 0)
        cout << l << " " << l + 1 << " " << l + 2;
    else
        cout << l + 1 << " " << l + 2 << " " << l + 3;
}