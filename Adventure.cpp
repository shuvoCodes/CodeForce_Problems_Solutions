#include <bits/stdc++.h>
using namespace std;
vector<int>val(1005);
vector<int>weight(1005);
int dp[1005][1005];
int knapsack(int v,int bw)
{
    if(v < 0 || bw <= 0) return 0;
    if(dp[v][bw] != -1) return dp[v][bw];
    if(weight[v] <= bw) 
    {
        int opt1 = knapsack(v-1,bw - weight[v]) + val[v];
        int opt2 = knapsack(v-1,bw);
     
        dp[v][bw] = max(opt1,opt2);
        return dp[v][bw];
    }
    else 
    {
        dp[v][bw] = knapsack(v-1,bw);
        return dp[v][bw];
    } 
}
int main()
{
    int t;
    cin >> t;
    while(t--)    
    {   
        memset(dp,-1,sizeof(dp));
        int n,bw;
        cin >> n >> bw;
        for(int i = 0; i < n; i++)
        {
            cin >> weight[i];
        }
        for(int i = 0; i < n; i++)
        {
            cin >> val[i];
        }
        int res = knapsack(n-1,bw);
        cout << res << endl;
    }
    return 0;
}