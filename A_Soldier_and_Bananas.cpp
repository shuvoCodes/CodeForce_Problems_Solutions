#include <bits/stdc++.h>
using namespace std;
#define ll 
int main()
{
    int k,n,w;
    cin >> k >> n >> w;
    int sum = 0;
    for(int i = 1; i <= w;i++)
    {
        sum += i*k;
    }
    int res = sum - n;
    if(res < 0) cout << 0 << endl;
    else
        cout << res << endl;
    return 0;
}