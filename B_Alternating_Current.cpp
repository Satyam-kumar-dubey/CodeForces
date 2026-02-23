#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    stack<char> st;
    for (char c : s) 
    {
        if (!st.empty() && st.top() == c) st.pop();  
        else st.push(c);
    }

    cout << (st.empty() ? "Yes" : "No") << '\n';
}