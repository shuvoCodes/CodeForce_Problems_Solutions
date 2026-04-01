#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    
    int tsum = 0;
    for(int i = 0; i<n;i++){
         cin >> v[i];
         tsum = tsum + v[i];
    }
    int res = tsum / 2;
    int psum = 0;
    int abc = 0;

    for(int i = 0; i < n - 1 ; i++)
    {
        psum = psum + v[i];
        if(psum == res)
        {
            abc++;
        }
    }
    cout << abc << endl;
    return 0;
}