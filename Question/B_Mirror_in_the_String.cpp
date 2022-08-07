#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char arr[n];
        string ans;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        bool temp = false;
        ans += arr[0];
        for (int i = 0; i < n; i++)
        {
            if (i > 0)
            {

                if (arr[i] < arr[i - 1])
                {
                    temp = true;
                    ans += arr[i];
                }
                else if (arr[i] == arr[i - 1])
                {
                    if (temp)
                    {
                        ans += arr[i];
                    }
                    else
                        break;
                }
                else
                    break;
            }
        }
        string output = ans;
        reverse(output.begin(), output.end());
        ans += output;
        cout << ans << endl;
    }
}