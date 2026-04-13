#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,y;
    cin>>x>>y;

    vector<int>v ={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    
    int p=lower_bound(v.begin(), v.end(), x) - v.begin();
    if(p+1 < v.size() && v[p+1] == y)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
}