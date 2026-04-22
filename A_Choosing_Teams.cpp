#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int s,t;
    cin>>s>>t;
    vector<int>v(s);
    for(int i=0; i<s; i++)
    cin>>v[i];

    sort(v.begin(),v.end());
    int c = 0;
    for(int val : v)
    {
        if(val + t <= 5)
        c++;
    }
    cout<<(c/3)<<"\n";
}