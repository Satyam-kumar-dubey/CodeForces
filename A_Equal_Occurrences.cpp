#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while (t--) 
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for (int i=0; i<n; i++) 
        cin>>a[i];

        vector<int>freq;
        int cnt=1;
        for (int i = 1; i < n; i++) 
        {
            if (a[i] == a[i - 1]) 
            cnt++;
            else 
            {
                freq.push_back(cnt);
                cnt = 1;
            }
        }
        freq.push_back(cnt);

        int ans = 0;
        for (int c=1; c<= n; c++) 
        {
            int m = 0;
            for (int f : freq) 
            {
                if (f >= c) 
                m++;
            }
            ans = max(ans, m * c);
        }

        cout<<ans<<'\n';
    }

}