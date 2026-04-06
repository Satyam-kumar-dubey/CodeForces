#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

vector<int>s (vector<int>&v)
{
    
    unordered_map<int,int>m;
    for(int i=0; i<v.size(); i++)
    m[v[i]]++;
    
    int h=INT_MIN;
    for(auto i: m)
    h=max(h,i.second);

    int n = m.size();
    return {h,n};

}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;

    vector<int>v(t);
    for(int i=0; i<t; i++)
    cin>>v[i];

    vector<int>a = s(v);
    cout<<a[0]<<" "<<a[1];
}