
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int>v(n);
        for(auto &x : v)
        cin>>x;

        int cnt = INT_MIN;
        for(int i=0; i<n; i++)
        {
            int cand = v[i];
            int no = 0;
            for(int j=0; j<n; j++)
            {
                if(v[j] % cand == 0)
                no++;
            }
            cnt = max(cnt,no);
        }
        cout<<n-cnt<<'\n';
    }
}