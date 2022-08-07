#include <bits/stdc++.h>
using namespace std;
int main()
{
    string num1, num2, numfinal;
    cin >> num1;
    cin >> num2;
    for (int i = 0; i < num1.length(); i++)
    {
        if (num1[i] != num2[i])
        {
            numfinal += '1';
        }
        else
        {
            numfinal += '0';
        }
    }
    cout << numfinal;
}