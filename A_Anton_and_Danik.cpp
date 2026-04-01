#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int fre[128] = {0};

    for(int i = 0; i < n;i++)
    {
        fre[s[i] - 0]++;
    }

    if(fre['A'] > fre['D']) cout << "Anton" << endl;
    else if(fre['A'] == fre['D']) cout << "Friendship" << endl;
    else cout << "Danik" << endl;
    return 0;
}