
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
        
        vector<int>f,s,b;
        for(int i=0; i<n; i++)
        {
            int x; 
            cin>>x;
            string st;
            cin>>st;
        
            if(st == "10")
            f.push_back(x);
            else if(st == "01")
            s.push_back(x);
            else if( st == "11")
            b.push_back(x);
        }
        sort(f.begin(),f.end());
        sort(s.begin(),s.end());
        sort(b.begin(),b.end());

        int a = 0;
        if(f.size() != 0 && s.size() != 0)
        {
            a = f[0] + s[0];
            if(b.size() != 0)
            a = min(a,b[0]);

            cout<<a<<'\n';
        }
        else if((f.size() == 0 || s.size() == 0) && b.size() != 0)
        cout<<b[0]<<'\n';
        else
        cout<<-1<<'\n';
    }
}