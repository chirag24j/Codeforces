#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int a, b, c;
    a = sqrt((s3 * s1) / s2);
    b = sqrt((s2 * s1) / s3);
    c = sqrt((s3 * s2) / s1);
    int sum = 4 * a + 4 * b + 4 * c;
    cout << sum;
}