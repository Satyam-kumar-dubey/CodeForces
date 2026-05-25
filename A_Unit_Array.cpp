
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
        int nm;
        cin>>nm;

        int n = 0, p = 0;
        for(int i=0; i<nm; i++)
        {
            int x;
            cin>>x;

            if(x == -1)
            n++;
            else
            p++;
        }

        int a = 0; 

        while(n > p)
        {
            a++;
            n--;
            p++;
        }

        cout<<(n % 2 != 0 ? a+1 : a)<<'\n';
    }
    
}
