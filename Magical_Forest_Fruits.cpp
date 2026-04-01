#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,q;
    cin >> n >> q;
   long long int arr[n+1],pre[n+1];
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    pre[0]=0;
    for(int i = 0; i<= n;i++)
    {
        pre[i] = pre[i-1]+arr[i];
    }
    while(q--)
    {
       long long int a,b;
        cin >> a >> b;

        cout << pre[b] - pre[a-1] << endl;
    }
    return 0;
}