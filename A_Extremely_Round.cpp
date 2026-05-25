
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while (t--)
    {
        string n;
        cin>>n;

        int d = n.size();
        int f = n[0] - '0';

        int a = (d - 1) * 9 + f;
        cout<<a<<'\n';
    }
}