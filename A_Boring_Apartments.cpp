
#include<bits/stdc++.h>
using namespace std;

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

        int gr = n % 10;
        string s = to_string(n);
        int l = s.size();

        int it = 1, c = 0;
        while(it < gr)
        {
            c += 10;
            it++;
        }
        for(int i=1; i<=l; i++)
        c += i;

        cout<<c<<'\n';
    }
    
}
