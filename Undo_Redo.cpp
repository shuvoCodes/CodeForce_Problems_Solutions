#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    stack<string>st;
    stack<string>st1;
    while(t--)
    {
        string s,s1;
        cin >> s;
        if(s == "TYPE")
        {   
            if(!st1.empty()) {
                while(!st1.empty()) st1.pop();
            }
            cin >> s1;
            st.push(s1);
        }
        else if(s == "UNDO")
        {
            st1.push(st.top());
            st.pop();
        }
        else if(s == "REDO")
        {
            if(!st1.empty())
            {
                st.push(st1.top());
                st1.pop();
            }
        }
        
    }
    vector<string> rev;

    while(!st.empty())
    {
        rev.push_back(st.top());
        st.pop();
    }
    reverse(rev.begin(),rev.end());
    for(auto c : rev)
    {
        cout << c;
    }
    return 0;
}