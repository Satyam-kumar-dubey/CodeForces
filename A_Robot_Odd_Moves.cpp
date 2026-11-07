
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int a, b;
        cin>>a>>b;

        if ((a - b) % 2 == 0)
        cout<<(b <= a ? a : -1)<<"\n";
        else
        cout<<(b <= a + 1 ? a + 1 : -1)<<"\n";
    }
}