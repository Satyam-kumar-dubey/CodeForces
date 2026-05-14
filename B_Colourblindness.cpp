
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
        string s1,s2;
        cin>>s1>>s2;

        bool f = true;
        for(int i=0; i<n; i++)
        {
            if((s1[i] == 'R' && s2[i] != 'R') || (s2[i] == 'R' && s1[i] != 'R'))
            {
                f = false;
                break;
            }
        }
        cout<<(f ? "YES" : "NO")<<'\n';
    }
}