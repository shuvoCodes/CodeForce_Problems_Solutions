#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin >> x >> y >> z;
    int multi = y * z;
    if(multi <= x)
    {
        cout << x - multi << endl; 
    }
    else cout << -1 << endl;
    return 0;
}