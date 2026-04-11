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
        int n,k;
        cin>>n>>k;

        vector<long long>v(n);
        for (int i = 0; i < n; i++)
        cin>>v[i];

        if (k > 1)
        cout<<"YES"<<"\n";
        else
        {
            bool f = true;
            for (int i = 1; i < n; i++)
            {
                if (v[i]<v[i - 1])
                {
                    f = false;
                    break;
                }
            }
            cout<<(f ? "YES" : "NO")<<"\n";
        }
    }
}