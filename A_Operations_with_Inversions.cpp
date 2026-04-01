
#include<iostream>
#include<vector>
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

        vector<int>v(n);

        for(int i=0; i<n; i++)
        cin>>v[i];

        int maxi=0, k=0;

        for (int x : v)
        {
            if (x >= maxi)
            {
                k++;
                maxi = x;
            }
        }

        cout<<n - k<<'\n';
    }
}