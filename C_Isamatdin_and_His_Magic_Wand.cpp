
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

    while (t--) {

        int n;
        cin>>n;

        vector<long long>v(n);

        bool even=false, odd=false;

        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            if (v[i] % 2 == 0)
            even = true;
            else 
            odd = true;
        }

        if(even && odd)
        {
            sort(v.begin(), v.end());
        }

        for (int i=0; i<n; i++) 
        {
            cout<<v[i]<<" ";
        }
        cout<<'\n';
    }
}