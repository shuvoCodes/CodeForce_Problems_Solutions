#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,s2;
    cin >> s >> s2;
    int len = s.length();
    int flg = 0;
    for(int i = 0; i < len; i++)
    {   
        char ch = tolower(s[i]);
        char ch2 = tolower(s2[i]);
        if(ch < ch2)
        {
            cout << -1 << endl;
            return 0;
        }
        else if(ch > ch2)
        {
            cout << 1 << endl;
            return 0;
        }
        
        
    }
    cout << 0 << endl;
    
    
    return 0;
}

/*
input:
aaaa
aaaA
output:
0 
*/