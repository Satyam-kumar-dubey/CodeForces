
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin>>n>>m;

    set<int>s;

    for(int i = 0; i < n; i++)
    {
        int no;
        cin>>no;

        for(int j = 0; j < no; j++)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
    }

    cout<<(s.size() == m ? "YES" : "NO")<<'\n';

}