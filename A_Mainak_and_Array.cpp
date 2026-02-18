
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
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

        int ans = arr[size-1] - arr[0];

        for(int i=1; i<size; i++)
        ans = max(ans, (arr[i] - arr[0]));

        for(int i=0; i<size-1; i++)
        ans = max(ans,(arr[size-1]-arr[i]));

        for(int i=0; i<size-1; i++)
        ans = max(ans,(arr[i]-arr[i+1]));

        cout<<ans<<'\n';
    }
}