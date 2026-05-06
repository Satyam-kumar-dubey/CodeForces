
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tst;
    cin>>tst;

    while(tst--)
    {
        int n,h;
        cin>>n>>h;

        vector<int>t(n);
        for(int i=0; i<n; i++)
        cin>>t[i];

        int curr = t[h-1], w = 1, it = 0;
        sort(t.begin(),t.end());

        for(int i=0; i<n; i++)
        {
            if(t[i] == curr)
            {
                it = i;
                break;
            }
        }
        while(it < n-1)
        {
            if(t[it+1] >= w + (t[it+1]-t[it]) && t[it] >= w + (t[it+1]-t[it]-1))
            {
                w += t[it+1] - t[it];
                it++;
            }
            else
            break;
        }
        cout<<(it == n-1 ? "YES" : "NO")<<'\n';
    }
}