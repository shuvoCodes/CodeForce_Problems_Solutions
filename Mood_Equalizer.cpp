#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int sum = 0;
    for(int i = 0; i< n;i++)
    {
        int x;
        cin >> x;
        sum += x;
    }
    long long int res = abs(sum)+1 / 2;
    cout << res << endl;
    return 0;
}