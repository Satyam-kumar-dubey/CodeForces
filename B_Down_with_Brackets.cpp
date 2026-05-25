
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
        string s;
        cin>>s;

        int a = 0;
        bool f = true;
        for(int i=0; i<s.size()-1; i++)
        {
            if(s[i] == '(')
            a++;
            else
            a--;

            if(a == 0)
            {
                f = false;
                break;
            }
        }
        cout<<(f ? "NO" : "YES")<<'\n';
    }
    
}

