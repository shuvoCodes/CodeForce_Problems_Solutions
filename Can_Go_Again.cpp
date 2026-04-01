#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int a, b;
    long long int w;
    Edge(int a, int b, long long int w)
    {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};

int main()
{
    int ver, edg;
    cin >> ver >> edg;
    vector<Edge> edge_list;
    long long int dis_arr[ver+1];
    while (edg--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        edge_list.push_back(Edge(a, b, w));
    }
    for (int i = 1; i <= ver; i++)
    {
        dis_arr[i] = LLONG_MAX;
    }
    int src;
    cin >> src;
    dis_arr[src] = 0;
    for (int i = 1; i <= ver - 1; i++)
        for (auto ed : edge_list)
            if (dis_arr[ed.a] != LLONG_MAX && dis_arr[ed.a] + ed.w < dis_arr[ed.b])
                dis_arr[ed.b] = dis_arr[ed.a] + ed.w;
    bool cycle = false;
    for (auto ed : edge_list) {
        if (dis_arr[ed.a] != LLONG_MAX && dis_arr[ed.a] + ed.w < dis_arr[ed.b]) {
            cycle = true;
            break;
        }
    }
    if (cycle) {
        cout << "Negative Cycle Detected" << endl;
    } else {
        int t;
        cin >> t;
        while (t--) {
            int des;
            cin >> des;
            if (dis_arr[des] == LLONG_MAX) cout << "Not Possible" << endl;
            else cout << dis_arr[des] << endl;
        }
    }
    return 0;
}