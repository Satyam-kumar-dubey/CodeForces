
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<long long>v(n);

        for (int i = 0; i < n; i++)
        cin>>v[i];

        if(v[0] == -1 && v[n - 1] == -1)
        {
            v[0] = 0;
            v[n - 1] = 0;
        } 
        else if(v[0] == -1)
        {
            v[0] = v[n - 1];
        }
        else if(v[n - 1] == -1)
        {
            v[n - 1] = v[0];
        }

        for (int i = 1; i < n - 1; i++)
        {
            if (v[i] == -1)
            v[i] = 0;
        }

        cout<<llabs(v[n - 1] - v[0])<<'\n';

        for (int i = 0; i < n; i++)
        cout<<v[i]<<(i + 1 == n ? '\n' : ' ');
    }
}