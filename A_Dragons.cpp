
#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    int str,lvl;
    cin>>str>>lvl;

    vector<pair<int,int>>v(lvl);

    for(int i=0; i<lvl; i++)
    cin>>v[i].first>>v[i].second;

    sort(v.begin(),v.end());
    
    bool f = false;
    for(int i=0; i<lvl; i++)
    {
        if(str > v[i].first)
        str += v[i].second;
        else
        {
            f = true;
            break;
        }
    }
    cout<<(!f ? "YES" : "NO")<<'\n';
    
}