
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,dest;
        cin>>n>>dest;
        vector<int>gasStation(n);
        for(int i=0; i<n; i++)
        cin>>gasStation[i];

        sort(gasStation.begin(),gasStation.end());
        int ans = 0;
        for(int i=1; i<n; i++)
        {
            int diff = gasStation[i] - gasStation[i-1];
            ans = max(ans,diff);
        }
        ans = max(ans,(gasStation[0]-0));
        ans = max(2*(dest-gasStation[gasStation.size()-1]),ans);
        cout<<ans<<endl;
    }
}