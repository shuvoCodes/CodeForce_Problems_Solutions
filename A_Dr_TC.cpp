#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0, mCnt =0,fcnt = 0;
        for(char c : s)
        {
            if(c == '1')
            {
                cnt++;
            }
        }
        mCnt = cnt;
        for(char c : s)
        {
            if(c == '1') cnt--;
            else cnt++;
            fcnt = fcnt + cnt;
        }
        cout << fcnt << endl;
    }
    return 0;
}