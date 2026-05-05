
#include<iostream>
#include<string>
#include<climits>
#include<algorithm>
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
        cin>>n;

        string s = to_string(n);
        int sm = INT_MAX;

        for(int i=0; i<s.size(); i++)
        {
            int val = s[i]-'0';
            sm = min(sm,val);
        }
        cout<<sm<<"\n";
    }
}