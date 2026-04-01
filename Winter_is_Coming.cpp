#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,a,b;
        cin >> n >> a >> b;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        int cnt = 0;
        bool waring = false;
        for(int i =0; i < n; i++)
        {   
            if(arr[i] < a){
                if(!waring){
                    waring = true;
                    cnt++;
                }
            }
            else if(arr[i] > b)
            {   if(waring)
                 waring = false;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}