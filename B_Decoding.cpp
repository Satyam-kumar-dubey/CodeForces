#include <iostream>
#include<string>
#include<deque>
#include<algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    string s;
    cin >> t >> s;

    deque<char> dq;

    for (int i = 0; i < t; i++) 
    {
        char c = s[i];

        if ((t % 2 == 0 && i % 2 == 0) || (t % 2 == 1 && i % 2 == 1)) 
        {
            dq.push_front(c);
        } else 
        {
            dq.push_back(c);
        }
    }

    string ans;
    ans.reserve(t);

    for (char c : dq) 
    ans.push_back(c);

    cout << ans << "\n";
}