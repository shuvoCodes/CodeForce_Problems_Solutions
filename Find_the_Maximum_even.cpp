#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,max = 0,tsum = 0;
    cin >> n;
    int v[n];
    for(int i = 0;i<n;i++) cin >> v[i];
    
    for(int i = 0; i < n-1;i++)
    {
        for(int j = i+1; j <= n-1;j++)
        {
           int sum = v[i] + v[j];
            if (max < sum){
                if(sum % 2 == 0) max = sum;
                else{
                    for(int i = 0; i < n ; i++)
                    {
                        if(v[i] %2 == 0)
                        {
                            if(max < v[i]) max = v[i];
                        }
                    }
                }
            } 
        }
        
    }
   cout << max << endl;
    return 0;
}