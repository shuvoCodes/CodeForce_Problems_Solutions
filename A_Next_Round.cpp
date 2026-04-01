#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0 ; i< n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int cnt = 0;
    int cutoff = v[k-1];
    for(int x : v)
    {
        if(x >= cutoff && x > 0) cnt++;
    }
    cout << cnt << endl;
    return 0;
}

/*
Input: 
8 5
10 9 8 7 7 7 5 5

OutPut: 
6

*/