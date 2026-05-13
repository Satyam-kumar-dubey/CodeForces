
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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        int it = 0, a = 0;
        while(it < s.size())
        {
            if(s[it] == 'B')
            {
                it = it+k;
                a++;
            }
            else
            it++;
        }
        cout<<a<<'\n';
    }
}