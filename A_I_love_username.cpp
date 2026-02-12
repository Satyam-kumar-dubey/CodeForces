
#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    int size;
    cin>>size;

    vector<int>v(size);
    for(int i=0; i<size; i++)
    cin>>v[i];

    int maxi = v[0], mini = v[0], ans = 0;
    for(int i=1; i<size; i++)
    {
        if(v[i] > maxi)
        {
            maxi = v[i];
            ans++;
        }
        else if(v[i] < mini)
        {
            mini = v[i];
            ans++;
        }
    }
    cout<<ans<<'\n';
}