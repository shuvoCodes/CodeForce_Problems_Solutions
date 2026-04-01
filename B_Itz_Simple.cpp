#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, p;
        cin >> n >> k >> p;
        int arr[n];
        for(int i = 0 ; i < n; i++)
            cin >> arr[i];
        int mx = 0;
        int idx = 0;
        for(int i = 0;i<n;i++)
        {
           if (arr[i] > mx) 
           {
                mx = arr[i];
                idx = i;
           }
        }
        int sum = 0;
        for(int i = 0 ; i < n ; i++)
        {
            if(i != idx) 
                sum = sum + arr[i];
        }
    
        int ved = k + mx;
        int ver = p + sum;
    
        if(ved > ver) cout << "Ved" << endl;
        else if (ved < ver) cout << "Varun" << endl;
        else cout << "Equal" << endl;
        
    }
    return 0;
}