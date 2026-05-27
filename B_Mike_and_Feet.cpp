
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int>v(n);
    for(int i=0; i<n; i++)
    cin >> v[i];

    vector<int>a(n,0);
    stack<int>s;

    for(int i=0; i<n; i++)
    {
        while(!s.empty() && v[s.top()] >= v[i])
        {
            int id = s.top();
            s.pop();

            if(s.empty())
            {
                int rn = i;
                a[rn-1] = max(a[rn-1], v[id]);
            }
            else
            {
                int rn = i - s.top() - 1;
                a[rn - 1] = max(a[rn - 1], v[id]);
            }
        }

        s.push(i);
    }

    while(!s.empty())
    {
        int id = s.top();
        s.pop();

        if(s.empty())
        {
            int rn = n;
            a[rn - 1] = max(a[rn - 1], v[id]);
        }
        else
        {
            int rn = n - s.top() - 1;
            a[rn - 1] = max(a[rn - 1], v[id]);
        }
    }

    for(int i=n-2; i>=0; i--)
    a[i] = max(a[i], a[i+1]);

    for(int i=0; i<n; i++)
    cout << a[i] << " ";

    cout<<'\n';
}