
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    string s;
    cin>>s;

    int it = 0, a = 0;
    while(it < s.size())
    {
        if(s[it] == 'x')
        {
            int c = 0;
            while(s[it] == 'x')
            {
                c++;
                it++;
            }
            if(c == 3)
            a += 1;
            else if (c > 3)
            a += c - 2;
        }
        it++;
    }
    cout<<a<<'\n';
}
