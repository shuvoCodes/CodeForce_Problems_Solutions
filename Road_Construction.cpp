#include <bits/stdc++.h>
using namespace std;
int grp_led[1000006];
int grp_size[100006];
int cmp,mx;
int find(int node)
{
    if(grp_led[node] == -1)
        return node;
    int leader = find(grp_led[node]);
    grp_led[node]=leader;
    return leader;
}
void dsu_union(int node1,int node2)
{
    int led1 = find(node1);
    int led2 = find(node2);

    if(led1 == led2) return;
    if(grp_size[led1] >= grp_size[led2])
    {
        grp_led[led2] = led1;
        grp_size[led1] += grp_size[led2];
        mx = max(mx,grp_size[led1]);
    }
    else
    {
        grp_led[led1] = led2;
        grp_size[led2] += grp_size[led1];
        mx = max(mx,grp_size[led2]);
    }
    cmp--;
}
int main()
{
    int n,e;
    cin >> n >> e;
    for(int i  = 1; i <=n; i++)
    {
        grp_led[i] = -1;
        grp_size[i] = 1;
    }
    cmp = n;
    mx = 1;
    while(e--)
    {
        int a , b;
        cin >> a >> b;
        dsu_union(a,b);
        
        cout << cmp << " " << mx << endl;
    }
    return 0;
}