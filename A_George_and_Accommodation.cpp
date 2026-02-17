
#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int size;
    cin>>size;

    int count = 0;
    vector<pair<int,int>>arr(size);
    for(int i=0; i<size; i++)
    {
        cin>>arr[i].first>>arr[i].second;
        if((arr[i].second - arr[i].first) >= 2)
        count++;
    }

    cout<<count<<'\n';
}