
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;

    int c = 0, o = 0;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i] < 0)
        {
            if(o > 0)
            o--;
            else
            c++;
        }
        else
        o += v[i];
    }
    cout<<c<<'\n';
}
