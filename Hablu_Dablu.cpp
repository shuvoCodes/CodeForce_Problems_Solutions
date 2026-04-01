#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,h;
    cin >> n >> h;
   long long int mx = 0;
    for(int i = 0; i < n; i++)
    {
        long long int x; 
        cin >> x;
        mx = max(mx,x);
    }
    long long dm = mx * (mx - 1) /2;
    if(dm < h) cout << "Hablu" << endl;
    else cout << "Dablu" << endl;
    return 0;
}