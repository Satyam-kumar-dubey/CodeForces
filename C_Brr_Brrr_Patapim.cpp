
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<bool> v(2*n + 1, false);
        vector<int> a(2*n + 1);

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                int x;
                cin >> x;

                a[i+j+2] = x;
                v[x] = true;
            }
        }

        for(int x=1; x<=2*n; x++)
        {
            if(!v[x])
            {
                a[1] = x;
                break;
            }
        }

        for(int i=1; i<=2*n; i++)
        cout<<a[i]<< " ";

        cout<<'\n';
    }
}