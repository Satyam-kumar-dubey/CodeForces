#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<int>v(7);

    for(int i = 0; i < 7; i++)
    cin>>v[i];

    int x = 0;

    while(n > 0)
    {
        n -= v[x];

        if(n <= 0)
        {
            cout<<x + 1<<'\n';
            break;
        }

        x = (x + 1) % 7;
    }
}