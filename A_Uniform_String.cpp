
#include<iostream>
#include<string>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin>>test;

    while(test--)
    {
        int n,k;
        cin>>n>>k;

        string ans;
        for(int i=0; i<n; i++)
        {
            char ch = ('a' + (i%k));
            ans += ch;
        }
        cout<<ans<<'\n';
    }
}