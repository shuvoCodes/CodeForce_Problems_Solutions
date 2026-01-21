#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        int a[x];
        for(int i = 0; i< x;i++) cin >> a[i];
        sort(a,a+x);
        int mn = a[0];
        int mx = a[x-1];
        if(mn%2 == mx%2) cout << 0 << endl;
        else{
            int i = 0,cnt1 = 0;
            while(a[i]%2 != mx%2)
            {
                i++;
                cnt1++;
            }
            int j = x-1,cnt2 = 0;
            while(a[j]%2 != mn%2)
            {
                j--;
                cnt2++;
            }
            cout << min(cnt1,cnt2) << endl;
        }

    }
    return 0;
}