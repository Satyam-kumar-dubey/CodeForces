
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int>bin;
    for(int i=1; i<=1e5; i++)
    {
        int x = i;
        bool f = true;
        while( x > 0 )
        {
            int d = x % 10;
            if(d != 0 && d != 1)
            {
                f = false;
                break;
            }
            x = x / 10;
        }
        if(f)
        bin.push_back(i);
    }
    vector<bool>v(1e5+1, false);
    queue<int>q;

    v[1] = true;
    q.push(1);

    while(!q.empty())
    {
        int cr = q.front();
        q.pop();

        for(int it : bin)
        {
            long long neigh = 1LL * cr * it;
            if(neigh > 1e5)
            continue;

            if(!v[neigh])
            {
                v[neigh] = true;
                q.push((int)neigh);
            }
        }
    }

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        cout<<(v[n] ? "YES" : "NO")<<'\n';
    }
}