#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long int left = 0;
        long long int right = n - 1;
        long long int max_area = -1;
        long long int left_ans = 0,right_ans = 0;
        while(left < right)
        {
            long long int height = min(arr[left],arr[right]);
            if(height > max_area)
            {
                max_area = height;
                left_ans = left;
                right_ans = right;
            }
            if(arr[left]<arr[right])
                left++;
            else 
                right--;
        }
        cout << left_ans << " " << right_ans << endl;
    }
    return 0;
}