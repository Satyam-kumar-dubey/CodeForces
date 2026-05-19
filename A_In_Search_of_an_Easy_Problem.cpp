
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    int o = 0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;

        if(x == 1)
        o++;
    }
    cout<<(o == 0 ? "EASY" : "HARD")<<'\n';
}