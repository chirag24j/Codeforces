#include <bits/stdc++.h>
using namespace std;
int main()
{
    string one, two;
    cin >> one >> two;
    transform(one.begin(), one.end(), one.begin(), ::tolower);
    transform(two.begin(), two.end(), two.begin(), ::tolower);
    int k = one.compare(two);
    if (k == 0)
    {
        cout << "0";
    }
    else if (k < 0)
        cout << "-1";
    else if (k > 0)
        cout << "1";
}