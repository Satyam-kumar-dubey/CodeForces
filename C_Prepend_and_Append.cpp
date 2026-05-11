
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

        int it1 = 0, it2 = s.size()-1;
        bool f = false;
        while(it1 <= it2)
        {
            if((s[it1] == '0' && s[it2] == '1') || s[it1] == '1' && s[it2] == '0')
            {
                it1++;
                it2--;
            }
            else
            {
                int l=0;
                for(int i=it1; i<=it2; i++)
                l++;

                f = true;
                cout<<l<<'\n';
                break;
            }
        }
        if(!f)
        cout<<0<<'\n';
    }
}