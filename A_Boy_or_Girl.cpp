#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int sz = s.size();
    int fre[26] = {0};
    int cnt = 0;
    for(int i = 0; i < sz;i++)
    {   
        fre[s[i] - 'a']++;
        if(fre[s[i] - 'a'] == 1) cnt++;
        
    }
    if(cnt%2==0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;
    return 0;
}