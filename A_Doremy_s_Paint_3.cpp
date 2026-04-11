#include<iostream>
#include<map>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        map<int,int> m;
        for (int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            m[x]++;
        }

        if(m.size() == 1)
        cout << "Yes\n";
        else if(m.size() > 2)
        cout<<"No\n";
        else
        {
            auto i = m.begin();
            int c1 = i->second;
            ++i;
            int c2 = i->second;
            if(abs(c1 - c2) <= 1)
            cout<<"Yes"<<"\n";
            else
            cout<<"No"<<"\n";
        }
    }
}