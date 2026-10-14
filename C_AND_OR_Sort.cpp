
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
        string s;
        cin>>n>>s;

        int op1 = 0, op2 = 0;
        for(int i=n-1; i>=1; i--)
        {
            if(s[i] == '0' && s[i-1] == '1')
            op1++;
        }
        for(int i=0; i<n-1; i++)
        {
            if(s[i] == '1' && s[i+1] == '0')
            op2++;
        }
        cout<<max(op1,op2)<<'\n';

    }
}