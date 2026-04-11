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

    while(t--)
    {
        int n,x;
        cin>>n>>x;

        vector<int>v(n);
        for (int i = 0; i < n; i++)
        cin>>v[i];

        int a = v[0];
        for (int i = 1; i < n; i++)
        a = max(a, v[i] - v[i - 1]);

        a = max(a, 2*(x - v[n - 1])); 
        cout<<a<<'\n';
    }
}