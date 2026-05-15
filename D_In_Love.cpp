
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    multiset<ll>f,s;
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        char c;
        int l,r;
        cin>>c>>l>>r;

        if(c == '+')
        {
            f.insert(l);
            s.insert(r);
        }
        else
        {
            f.erase(f.find(l));
            s.erase(s.find(r));
        }
        
        if(f.empty())
        cout<<"NO"<<'\n';
        else
        {
            auto lv = *prev(f.end());
            auto rv = *s.begin();

            cout<<(lv > rv ? "YES" : "NO")<<'\n';
        }
       
    }
}