/*
Problem: Maze
Platform: HackerRank
Link: https://www.hackerrank.com/contests/mid-term-exam-a-introduction-to-algorithms-a-batch-08/challenges/maze-19
Difficulty: Easy
Solution: C++
*/
#include<bits/stdc++.h>
using namespace std;

char grid[105][105];
bool vis[105][105];
pair<int, int> parent[105][105];
vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
int n, m;

bool valid(int i, int j) {
    if(i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == '#' || vis[i][j])
        return false;
    return true;
}

void bfs(int si, int sj) {
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    parent[si][sj] = {-1, -1};
    while(!q.empty()) {
        pair<int, int> per = q.front();
        q.pop();
        if(grid[per.first][per.second] == 'D') return;
        for(int i = 0; i < 4; i++) {
            int ci = per.first + d[i].first;
            int cj = per.second + d[i].second;
            if(valid(ci, cj)) {
                vis[ci][cj] = true;
                parent[ci][cj] = {per.first, per.second};
                q.push({ci, cj});
            }
        }
    }
}
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int si, sj, di, dj;
    if(!(cin >> n >> m)) return 0;

    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < m; j++) 
        {
            cin >> grid[i][j];
            if(grid[i][j] == 'R') 
            {
                 si = i; sj = j; 
            }
            if(grid[i][j] == 'D') 
            {
                 di = i; dj = j; 
            }
        }
    }
    memset(vis, false, sizeof(vis));
    bfs(si, sj);
    if(vis[di][dj]) 
    {
        pair<int, int> per = parent[di][dj];
        while(per.first != -1 && grid[per.first][per.second] != 'R')
        {
            grid[per.first][per.second] = 'X';
            per = parent[per.first][per.second];
        }
    }
    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < m; j++)
        {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}