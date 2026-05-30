
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;

        int f = 0, l = 0, it = 0;
        while(it < n)
        {
            if(s[it] == 'B')
            {
                f = it;
                break;
            }
            it++;
        }
        it = n-1;
        while(it >= 0)
        {
            if(s[it] == 'B')
            {
                l = it;
                break;
            }
            it--;
        }
        cout<<(l-f+1)<<'\n';
    }
    
}
