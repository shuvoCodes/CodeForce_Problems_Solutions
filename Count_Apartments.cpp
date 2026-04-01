/*
Problem: Count Apartments
Platform: HackerRank
Link: https://www.hackerrank.com/contests/a1-algorithm-b8/challenges/count-apartments
Difficulty: Easy
Solution: C++
*/
#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
int c,r;
bool visited[1005][1005];
vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
bool valid(int i ,int j)
{
    if(i < 0 || j < 0 || i >= c || j >= r)
        return false;
    return true;
}
void dfs(int si, int sj)
{
    int ci , cj;
    visited[si][sj] = true;
    for(int i = 0; i<4;i++)
    {
        ci = si + d[i].first;
        cj = sj + d[i].second;
        if(!visited[ci][cj] && grid[ci][cj] != '#' && valid(ci,cj))
            dfs(ci,cj);
    }
}
int main()
{
    cin >> c >> r;
    for(int i = 0;i<c;i++)
    {
        for(int j = 0 ; j < r; j++)
        {
            cin >> grid[i][j];
        }
    }
    memset(visited,false,sizeof(visited));
    int cnt = 0;
    for(int i = 0; i< c; i++)
    {
        for(int j = 0; j < r; j++)
        {
            if(!visited[i][j] && grid[i][j] != '#' && valid(i,j))
            {
                dfs(i,j);
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}