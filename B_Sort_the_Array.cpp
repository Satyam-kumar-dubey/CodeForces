
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

bool asc(vector<int>v)
{
    for(int i=1; i<v.size(); i++)
    {
        if(v[i] < v[i-1])
        return false;
    }
    return true;
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0; i<n; i++)
    cin>>v[i];

    vector<int>s(n);
    for(int i=0; i<n; i++)
    s[i] = v[i];

    sort(s.begin(),s.end());

    int f = 0, l = 0;
    for(int i=0; i<n; i++)
    {
        if(v[i] != s[i])
        {
            f = i;
            break;
        }
    }

    for(int i=n-1; i>=0; i--)
    {
        if(v[i] != s[i])
        {
            l = i;
            break;
        }
    }
    
    int fi = f+1, li = l+1;
    while(f < l)
    {
        swap(v[f],v[l]);
        f++;
        l--;
    }
    if(asc(v))
    {
        cout<<"yes"<<'\n';
        cout<<fi<<" "<<li<<'\n';
    }
    else
    cout<<"no"<<'\n';
}
