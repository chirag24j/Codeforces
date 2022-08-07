#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, counta = 0, countb = 0, countc = 0;
    cin >> a >> b;
    for (int i = 1; i <= 6; i++)
    {
        if (abs(a - i) < abs(b - i))
            counta++;
        else if (abs(b - i) < abs(a - i))
            countb++;
        else if (abs(a - i) == abs(b - i))
            countc++;
    }
    cout << counta << " " << countc << " " << countb;
}