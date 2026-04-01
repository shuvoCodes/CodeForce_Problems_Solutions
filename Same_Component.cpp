/*
Problem:  Same Component
Platform: HackerRank
Link: https://www.hackerrank.com/contests/mid-term-exam-a-introduction-to-algorithms-a-batch-08/challenges/same-component
Difficulty: Easy
Solution: C++
*/
#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
int n,m;

bool valid(int i , int j)
{
    if(i < 0 || j < 0 || i >= n || j >= m)
        return false;
    return true;
}

void dfs(int ai,int aj)
{
    if(grid[ai][aj] == '-') return; 
    vis[ai][aj] = true;
    int ci,cj;
    for(int i = 0; i<4;i++)
    {
        ci = ai + d[i].first;
        cj = aj + d[i]. second;
        if(!vis[ci][cj] && valid(ci,cj) && grid[ci][cj] != '-')
            dfs(ci,cj);
    }
}
int main()
{
    
    cin >> n >> m;
    for(int i = 0; i<n;i++)
    {
        for(int j = 0; j < m ; j++) cin >> grid[i][j];
    }
    memset(vis,false,sizeof(vis));
    int src_i,src_j,dis_i,dis_j;
    cin >> src_i >> src_j >> dis_i >> dis_j;
    dfs(src_i,src_j);
    if(vis[dis_i][dis_j]) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}