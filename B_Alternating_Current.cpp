
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;

    stack<char>st;
    for (char c : s) 
    {
        if (!st.empty() && st.top() == c)
        st.pop();  
        else
        st.push(c);
    }

    cout<<(st.empty() ? "Yes" : "No")<<'\n';
}







#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    
    vector<int> left(n), right(n);
    stack<int> st;

    for(int i = 0; i < n; i++) 
    {
        while(!st.empty() && arr[st.top()] >= arr[i]) 
        {
            st.pop();
        }
        if(st.empty()) 
        {
            left[i] = -1;
        } else 
        {
            left[i] = st.top();
        }
        st.push(i);
    }

    st = stack<int>();

    for(int i = n - 1; i >= 0; i--) 
    {
        while(!st.empty() && arr[st.top()] >= arr[i]) 
        {
            st.pop();
        }
        if(st.empty()) 
        {
            right[i] = n;
        } else 
        {
            right[i] = st.top();
        }
        st.push(i);
    }

    vector<int> ans(n + 1, 0);
    for(int i = 0; i < n; i++) 
    {
        int len = right[i] - left[i] - 1;
        ans[len] = max(ans[len], arr[i]);
    }

    for(int i = n - 1; i >= 1; i--) 
    {
        ans[i] = max(ans[i], ans[i + 1]);
    }

    for(int i = 1; i <= n; i++) 
    {
        cout << ans[i] << " ";
    }

    return 0;
}