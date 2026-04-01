/*
Problem: Count Apartments II
Platform: HackerRank
Link: https://www.hackerrank.com/contests/a1-algorithm-b8/challenges/count-apartments-ii/problem
Difficulty: Easy
Solution: C++
*/
#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
int c,r;
bool visited[1005][1005];
vector<int> v;

vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};

bool valid(int i ,int j)
{
    if(i < 0 || j < 0 || i >= c || j >= r)
        return false;
    return true;
}

int dfs(int si, int sj)
{
    int ci , cj;
    int cnt = 1;
    visited[si][sj] = true;
    for(int i = 0; i<4;i++)
    {
        ci = si + d[i].first;
        cj = sj + d[i].second;
        if(valid(ci,cj) && !visited[ci][cj] && grid[ci][cj] == '.')
        {
            cnt += dfs(ci,cj);
            
        }
    }
    return cnt;
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
    int no = 0;
    int cnt = 0;
    for(int i = 0; i< c; i++)
    {
        for(int j = 0; j < r; j++)
        {
            if(valid(i,j) && !visited[i][j] && grid[i][j] == '.')
            {
                no =  dfs(i,j);
                v.push_back(no);
            }
        }
    }
    sort(v.begin(),v.end());
    if(no == 0) cout << 0 << endl;
    else{
        for(int x:v)
        {
            cout << x << " ";
        }
    }
    return 0;
}