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
        int cnt=0;
        if(s.size() <= 10 ) cout << s << endl;
        else{
        
        int siz = s.size() - 2;
        cout << s.front() << siz << s.back() << endl;
        }

    }
    return 0;
}