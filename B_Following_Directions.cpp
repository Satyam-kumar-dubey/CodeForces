
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

        bool f = false;
        int x = 0, y = 0;
        for(char c : s)
        {
            if(c == 'U')
            y++;
            else if(c == 'D')
            y--;
            else if(c == 'L')
            x--;
            else
            x++;

            if( x == 1 && y == 1)
            {
                f = true;
                cout<<"YES"<<'\n';
                break;
            }
        }
        if(!f)
        cout<<"NO"<<'\n';
    }
}