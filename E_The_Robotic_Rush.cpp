
#include<iostream>
#include<set>
#include<vector>
#include<string>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        set<long long>ro,sp;

        for(int i=0; i<n; i++)
        {
            long long x;
            cin>>x;
            ro.insert(x);
        }
        for(int i=0; i<m; i++)
        {
            long long x;
            cin>>x;
            sp.insert(x);
        }
        string s;
        cin>>s;

        int val = 0;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'L')
            val--;
            else val++;

            vector<long long>tmp;

            for(auto x : ro)
            {
                if(sp.find(x + val) != sp.end())
                tmp.push_back(x);
            }

            for(auto x :tmp)
            ro.erase(x);

            cout<<ro.size()<< " ";
        }
        cout<<"\n";
    }
}