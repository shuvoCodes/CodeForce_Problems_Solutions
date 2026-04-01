#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int arr[n+1];
	    for(int i = 0; i<= n;i++)
	    {
	        cin  >> arr[i];
	    }
	    int mn = 1000;
	    int mx;
	  
	    for(int i = 0; i <n+1;i++)
	    {
	        mx = max(arr[i],arr[i+1]);
	        mn = min(mx,mn);
	    }
	    cout << mn << endl;
	}

}
