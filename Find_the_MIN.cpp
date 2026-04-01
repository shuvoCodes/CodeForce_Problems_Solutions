#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    map<int, int> mp;

    while(q--)
    {
        int type;
        cin >> type;

        if(type == 1)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        else
        {
            if(mp.empty())
            {
                cout << "empty" << endl;
            }
            else
            {
               
                cout << mp.begin()->first<< endl;
                mp.erase(mp.begin()->first);
            }
        }
    }

    return 0;
}