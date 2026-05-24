
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin>>s;

    int it = 0;
    while(it < s.size())
    {
        if(s.substr(it,3) == "144")
        it += 3;
        else if(s.substr(it,2) == "14")
        it += 2;
        else if(s.substr(it,1) == "1")
        it += 1;
        else
        {
            cout<<"NO"<<'\n';
            return 0;
        }
    }
    cout<<"YES"<<'\n';
}
