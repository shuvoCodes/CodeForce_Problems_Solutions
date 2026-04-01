#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int fre[128] ={0};
        for(auto c:s)
        {
            fre[c]++;
        }
        
        if(fre['\\'] == fre['0']) cout << 0 << endl;
        else{
            if(fre['\\'] % 2 != 0) cout << "INVALID" << endl;
            else{
                    int bk = fre['\\'] / 2;
                    int res = bk + fre['0'];
                    cout << res << endl;
            }
           
        }
    }
    return 0;
}