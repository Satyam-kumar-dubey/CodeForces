
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;

    int s = 1, pr = 1, l = 1;

    for(int i = 2; ; i++)
    {
        int cr = i + pr;
        
        if(s + cr <= n)
        {
            s += cr;
            pr = cr;
            l++;
        }
        else
        {
            cout<<l<<'\n';
            break;
        }
    }
}