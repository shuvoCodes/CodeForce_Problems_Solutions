/*
Problem: Area Of Component
Platform: HackerRank
Link: https://www.hackerrank.com/contests/mid-term-exam-a-introduction-to-algorithms-a-batch-08/challenges/area-of-component
Difficulty: Easy
Solution: C++
*/
#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
int n,m;
bool vis[1005][1005];
vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
bool valid(int i,int j)
{
    if(i < 0 || j < 0 || i >= n || j>=m)
        return false;
    return true;
}
int dfs(int si, int sj)
{
    vis[si][sj] = true;
    int cnt = 1;
    for(int i = 0;i < 4; i++)
    {
        int ci,cj;
        ci = si + d[i].first;
        cj = sj + d[i].second;
        if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj] != '-')
        {
            cnt += dfs(ci,cj);
        }
    }
    return cnt;
}
int main()
{
    
    cin >> n >> m;
    for(int i = 0; i<n;i++)
    {
        for(int j = 0; j<m;j++) cin >> grid[i][j];
    }
    memset(vis,false,sizeof(vis));
    int min_cnt = INT_MAX;
    bool flg = false;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            if(!vis[i][j] && grid[i][j] == '.')
            {
                int cnt = dfs(i,j);
                min_cnt = min(min_cnt,cnt);
                flg = true;
            }
        }
    }
    if(!flg) cout << -1 << endl;
    else cout << min_cnt << endl;
    return 0;
}