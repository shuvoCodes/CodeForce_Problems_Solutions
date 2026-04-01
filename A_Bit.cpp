#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int x = 0;

    while(t--)
    {
        string s;
        cin >> s;
        
        if(s == "++X" || s == "X++") x++;
        else x--;
        
        
    }
   cout << x << endl;
    return 0;
}

/*
Input : 
1. 
1
++X
2.
2
X++
--X

OutpUt:

1.  1
2.  0
*/