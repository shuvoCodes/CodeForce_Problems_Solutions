#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,rev = 0;
    cin >> n;
    int flg = 0;
    while(n > 0)
    {
        if(n%10 != 4 || n % 10 != 7) {
            flg++;

        }
        n = n / 10;
    }
    if(flg == 4 || flg == 7) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}