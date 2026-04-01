#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while(t--)
    {
       long long int a,b;
        cin >> a >> b;
        string s1,s2;
        cin >> s1;
        cin >> s2;
        int cnt = 0;
        for(int  i = 1; i <= a;i++)
        {
            if(s1[i] != s2[i])
                cnt++;
        }
        if(cnt <= b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}