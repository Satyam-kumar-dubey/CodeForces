#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while (t--)
    {
        int n, k;
        cin>>n>>k;

        vector<int>a(k + 1);
        for(int i=1; i<=k; i++)
        cin>>a[i];

        vector<int>b(n);
        for(int i=0; i<n; i++)
        cin>>b[i];

        vector<int>tp;
        for(int l=k; l>=1; l--)
        {
            for (int i = 0; i < n; i++) {
                if(b[i] == l)
                {
                    while(b[i] <= k)
                    {
                        tp.push_back(i + 1);
                        b[i]++;
                    }
                }
            }
        }
        cout<<tp.size()<<'\n';

        for(int i :tp)
        cout<<i<<' ';

        cout<<'\n';
    }
}