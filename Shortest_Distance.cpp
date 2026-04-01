#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int ver,edg;
    cin >> ver >> edg;
    long long int adj_mat[ver][ver];
    for(int i = 1;i<=ver;i++)
    {
        for(int j = 1; j<=ver;j++)
        {
            if(i==j) adj_mat[i][j] = 0;
            else adj_mat[i][j] = LLONG_MAX;
        }
    }
    while(edg--)
    {
        long long int a,b,w;
        cin >> a >> b >> w;
        adj_mat[a][b] = min(adj_mat[a][b],w);
    }
    for(int k = 1; k <= ver; k++)
    {
        for(int i = 1; i <= ver; i++)
        {
            for(int j = 1; j <= ver; j++)
            {
                if(adj_mat[i][k] < LLONG_MAX && adj_mat[k][j] < LLONG_MAX)
                {
                    adj_mat[i][j] = min(adj_mat[i][j], adj_mat[i][k] + adj_mat[k][j]);
                }
            }
        }
    }  

    int q;
    cin >>q;
    while (q--)
    {
        int x,y;
        cin >> x >> y;
        if(adj_mat[x][y] == LLONG_MAX) cout << -1 << endl;
        else
            cout << adj_mat[x][y] << endl;
    }
    
    return 0;
}