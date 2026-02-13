
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main ()
{
    int test;
    cin>>test;

    while(test--)
    {
        int size;
        cin>>size;

        vector<int>v(size);
        for(int i=0; i<size; i++)
        cin>>v[i];

        sort(v.rbegin(),v.rend());

        long long ans = 0;
        for(int i=0; i<size; i=i+2)
        {
            ans += v[i];
        }
        cout<<ans<<'\n';
    }
}