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
        for(int i = 0; i < s.size();i += 2)
        {
            char ch = s[i];
            int num = s[i+1] -'0';
            for(int j = 0; j < num;j++)
                cout << ch;
        }
        cout << endl;
    }
    return 0;
}