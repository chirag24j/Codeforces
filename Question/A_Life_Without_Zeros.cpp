#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    string s1 = to_string(a);
    string s2 = to_string(b);
    int total = a + b;
    string s3 = to_string(total);
    string temp1, temp2, temp3;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != '0')
            temp1 += s1[i];
    }
    for (int i = 0; i < s2.length(); i++)
    {
        if (s2[i] != '0')
            temp2 += s2[i];
    }
    for (int i = 0; i < s3.length(); i++)
    {
        if (s3[i] != '0')
            temp3 += s3[i];
    }
    int x = stoi(temp1);
    int y = stoi(temp2);
    int z = stoi(temp3);
    if (x + y == z)
        cout
            << "YES";
    else
        cout << "NO";
}