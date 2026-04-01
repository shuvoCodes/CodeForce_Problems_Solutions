#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,q;
        cin >> n >> q;
        vector<int>a,b;
        for(int i = 0;i<n;i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for(int i = 0;i<n;i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
        }
        while (q--)
        {
          int l,r;
          cin >> l >> r;
          for(int i = 0; i<n;i++)
          {
            if(a[i]<b[i])
            {
                a[i] = b[i];
            }
          }
          for(int i = 0; i<n-1;i++)
          {
            if(a[i] < a[i+1])
            {
                a[i]  = a[i+1];
            }
          }
          int sum = 0;
          for(int i = l-1 ;i<=r;i++)
          {
            sum = sum + a[i];
          }
          cout << sum << " ";
        }
    }
    
    return 0;
}