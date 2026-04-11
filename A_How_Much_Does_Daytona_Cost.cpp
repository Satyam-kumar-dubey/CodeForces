#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;
        bool f=false;
        for (int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            if(x==k)
            f=true;
        }
        cout<<(f ? "YES" : "NO")<<"\n";
    }
}