
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        vector<int>v(7);
        for(int i=0; i<7; i++)
        cin>>v[i];
        
        sort(v.begin(),v.end());
        
        int s = 0;
        for(int i=0; i<6; i++)
        {
            v[i] = (-1)*v[i];
            s += v[i];
        }
        s += v[6];
        cout<<s<<'\n';
    }
}