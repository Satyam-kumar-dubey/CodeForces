
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
        int n,m;
        string a,b,trn;
        cin>>n>>a>>m>>b>>trn;

        string rs;
        string f,l;

        for(int i=0; i<m; i++)
        {
            if(trn[i] == 'D')
            l += b[i];
            else
            f += b[i];
        }
        reverse(f.begin(),f.end());

        rs += f + a + l;
        cout<<rs<<'\n';
    }
    
}
