#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    vector<int>v(12);

    for(int i=0; i<12; i++)
    cin>>v[i];
    sort(v.begin(),v.end());

    if(t==0)
    cout<<0<<"\n";
    else
    {
        int s=0,c=0;
        for(int i=v.size()-1; i>=0; i--)
        {
            s += v[i];
            c++;
            if(s >= t)
            break;
        }
        cout<<(s < t ? -1 : c)<<"\n";
    }
}