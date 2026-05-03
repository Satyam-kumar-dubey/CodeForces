
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0; i<n; i++)
    cin>>v[i];

    int s = *min_element(v.begin(),v.end());
    int b = *max_element(v.begin(),v.end());

    int c = 0;
    for(int i=0; i<n; i++)
    {
        if(v[i] > s && v[i] < b)
        c++;
    }
    cout<<c<<"\n";
}