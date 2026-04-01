#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin >> s1;
    for(auto ch:s1)
    {
        if(ch != '+')
        {
            s2.push_back(ch);
        }
    }
    sort(s2.begin(),s2.end());
    for(int i = 0; i < s2.size();i++)
    {
        if(i != s2.size() - 1)
            cout << s2[i] << "+";
        else cout << s2[i];
    }
    return 0;
}