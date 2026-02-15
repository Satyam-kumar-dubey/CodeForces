
#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    int strength,level;
    cin>>strength>>level;

    vector<pair<int,int>>v(level);

    for(int i=0; i<level; i++)
    cin>>v[i].first>>v[i].second;

    sort(v.begin(),v.end());
    
    bool flag = false;
    for(int i=0; i<level; i++)
    {
        if(strength > v[i].first)
        strength += v[i].second;
        else
        {
            flag = true;
            break;
        }
    }
    cout<<(!flag ? "YES" : "NO")<<'\n';
    
}