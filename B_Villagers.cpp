
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin>>test;

    while(test--)
    {
        int size;
        cin>>size;
        vector<int>arr(size);

        for(int i=0; i<size; i++)
        cin>>arr[i];

        sort(arr.rbegin(),arr.rend());

        long long ans = 0;
        for(int i=0; i<size; i=i+2)
        ans += arr[i];

        cout<<ans<<'\n';
    }
}