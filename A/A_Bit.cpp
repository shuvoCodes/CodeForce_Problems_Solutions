#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = 0;
    while ((n--))
    {   
        string s;
        cin >> s;
        if(s == "x--") x--;
        else if(s == "--x") --x;
        else if(s == "++x") ++x;
        else if(s == "x++") x++;
        
    }
    cout << x << endl;
    
    return 0;
}