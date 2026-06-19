
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

ll solve(vector<int>&v)
{
    int cnt = 0, s = v.size();
    vector<int>f;
    for(int i=s-1; i>=0; i--)
    {
        if(v[i] == 0)
        cnt++;
        else if(v[i] == 1)
        f.push_back(cnt);
    }

    ll sum = 0;
    for(auto &x : f)
    sum += x;

    return sum;
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);

        for(auto &x : v)
        cin>>x;

        vector<int>a = v;
        vector<int>b = v;

        for(int i=0; i<n; i++)
        {
            if(a[i] == 0)
            {
                a[i] = 1;
                break;
            }
        }
        for(int i=n-1; i>=0; i--)
        {
            if(b[i] == 1)
            {
                b[i] = 0;
                break;
            }
        }
        ll op1 = solve(a);
        ll op2 = solve(b);
        ll op3 = solve(v);

        cout<<max({op1,op2,op3})<<'\n';
    }
    
}
