
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   
        int n;
        cin>>n;

        int cp = INT_MIN, vl = 0;
        for(int i=0; i<n; i++)
        {
            int a,b;
            cin>>a>>b;
            vl -= a;
            vl += b;

            cp = max(cp,vl);
        }
        cout<<cp<<'\n';
   
}