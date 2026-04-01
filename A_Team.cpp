#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int cnt = 0;
    
    while(t--)
    {
        int x[3];
        int flg = 0;
        for(int i = 0; i < 3;i++)
        {
            cin >> x[i];
        }
        for (int i = 0; i < 3; i++)
        {
            if(x[i] == 1) flg++;
            
        }
        
        if(flg >= 2) cnt++;
       
    }
     cout << cnt;
    return 0;
}