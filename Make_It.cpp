#include <bits/stdc++.h>
using namespace std;

map<int, bool> dp;
bool rec(int i ,int n)
{
   
    if (i == n) return true;
    else if (i > n) return false;

    if (dp.count(i)) return dp[i];

    bool res = rec(i + 3,n) || rec(i * 2,n);
    dp[i] = res;
    return dp[i];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        dp.clear();
        int n;
        cin >> n;
        bool res = rec(1,n);
        if (res) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}