
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0; i<n; i++)
    cin>>v[i];

    sort(v.begin(),v.end());

    int s = 0, e = n-1, c = 0;
    while(s <= e)
    {
        if(v[s] + v[e] > 4)
        {
            c++;
            e--;
        }
        else 
        {
            c++;
            s++;
            e--;
        }
    }
    cout<<c<<"\n";
}
