
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

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
       priority_queue<int>pq;

       for(int i=0; i<n; i++)
       {
            cin>>v[i];
            pq.push(v[i]);
       }

       vector<int>a;
       for(int i=0; i<n; i++)
       {
            if(v[i] == pq.top())
            {
                int tmp = pq.top();
                pq.pop();
                a.push_back(v[i] - pq.top());
                pq.push(tmp);
            }
            else
            a.push_back(v[i] - pq.top());
       }

       for(int x : a)
       cout<<x<<" ";

       cout<<'\n';
    }
    
}
