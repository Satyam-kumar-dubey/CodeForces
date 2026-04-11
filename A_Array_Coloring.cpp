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

        vector<int>v(n + 1);
        for (int i=1; i<=n; i++)
        {
            int x;
            cin>>x;
            v[x]=i;
        }
        bool f=true;
        for (int x=1; x<n; x++)
        {
            if((v[x] % 2)==(v[x + 1]%2))
            {
                f=false;
                break;
            }
        }
        cout<<(f ? "YES" : "NO")<<"\n";
    }
}