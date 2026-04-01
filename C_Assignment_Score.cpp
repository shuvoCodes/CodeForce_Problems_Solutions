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

        vector<int> arr(n);
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        int per = (n + 1) * 50;
        int extra = per - sum;

        if (extra < 0)
            cout << 0 << endl;
        else if (extra == per) cout << -1 << endl;
        else
            cout << extra << endl;
    }
    return 0;
}
