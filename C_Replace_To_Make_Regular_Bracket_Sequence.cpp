
#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool match(char open, char close) 
{
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}') ||
           (open == '<' && close == '>');
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;

    stack<char> st;
    int changes = 0;

    for (char c : s) 
    {
        if (c == '(' || c == '[' || c == '{' || c == '<') 
        {
            st.push(c);
        } else 
        {
            if (st.empty()) 
            {
                cout << "Impossible" << endl;
                return 0;
            }

            char open = st.top();
            st.pop();

            if (!match(open, c)) 
            {
                changes++;
            }
        }
    }

    if (!st.empty()) 
    {
        cout << "Impossible" << endl;
    } else 
    {
        cout << changes << endl;
    }

}