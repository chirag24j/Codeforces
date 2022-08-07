#include <bits/stdc++.h>
using namespace std;
int main()
{
    int year, temp;
    cin >> year;
    int ones, tens, thousand, tenk;
    for (int i = year + 1; i <= 9012; i++)
    {
        ones = i % 10;
        tens = (int)(i / 10) % 10;
        thousand = (int)(i / 100) % 10;
        tenk = (int)(i / 1000) % 10;
        if (ones != tens && ones != thousand && ones != tenk && tens != thousand && tens != tenk && thousand != tenk)
        {
            temp = i;
            break;
        }
    }
    cout << temp;
}
