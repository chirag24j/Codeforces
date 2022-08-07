#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> neg;
    vector<int> pos;
    vector<int> zero;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x < 0)
            neg.push_back(x);
        else if (x > 0)
            pos.push_back(x);
        else if (x == 0)
            zero.push_back(x);
    }
    if (neg.size() % 2 == 0)
    {
        int temp = neg.back();
        neg.pop_back();
        zero.push_back(temp);
    }
    if (pos.size() == 0)
    {
        int temp1 = neg.back();
        neg.pop_back();
        int temp2 = neg.back();
        neg.pop_back();
        pos.push_back(temp1);
        pos.push_back(temp2);
    }
    cout << neg.size() << " ";
    for (auto it = neg.begin(); it != neg.end(); ++it)
        cout << *it << " ";
    cout << endl;

    cout << pos.size() << " ";
    for (auto it = pos.begin(); it != pos.end(); ++it)
        cout << *it << " ";
    cout << endl;

    cout << zero.size() << " ";
    for (auto it = zero.begin(); it != zero.end(); ++it)
        cout << *it << " ";
}