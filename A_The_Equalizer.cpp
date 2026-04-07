
#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        
        int sum = 0;
        for(int i=0; i<n; i++)
        { 
            cin>>v[i];
            sum += v[i];
        }
        if(sum % 2 != 0 || (n*k) % 2 == 0)
        cout<<"YES"<<'\n';
        else
        cout<<"NO"<<'\n';
    }
}