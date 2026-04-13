#include<iostream>
#include<vector>
#include<algorithm>
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

        vector<int>v(n);
        for(int i = 0; i < n; i++)
        cin>>v[i];

        vector<int>b=v;
        sort(b.begin(),b.end());

        bool f=true;
        for (int i=1; i < n; i++)
        {
            if (b[i] == b[i - 1])
            {
                f=false;
                break;
            }
        }
        if(!f)
        {
            cout<<-1<<'\n';
            continue;
        }
        sort(v.rbegin(), v.rend());
        for (int i=0; i<n; i++)
        {
            cout<<v[i]<<(i + 1 == n ? '\n' : ' ');
        }
    }
}