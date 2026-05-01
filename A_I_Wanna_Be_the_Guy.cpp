#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    unordered_map<int,int>a;

    int s;
    cin>>s;
    vector<int>v(s);
    for(int i=0; i<s; i++)
    cin>>v[i];

    int t;
    cin>>t;
    vector<int>v2(t);
    for(int i=0; i<t; i++)
    cin>>v2[i];

    for(int it : v)
    a[it]++;
    for(int it: v2)
    a[it]++;

    bool f=false;
    for(int i=1; i<=n; i++)
    {
        if(!a.count(i))
        {
            f = true;
            break;
        }
    }
    cout<<(!f ? "I become the guy." : "Oh, my keyboard!")<<'\n';
}