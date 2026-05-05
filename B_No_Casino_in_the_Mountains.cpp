
#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        vector<int>v(n);
        for(int i=0; i<n; i++)
        cin>>v[i];
        
        int cn=0, an=0;
        for(int i=0; i<n; i++)
        {
            if(v[i] == 0)
            cn++;
            else
            {
                an += (cn+1)/(k+1);
                cn=0;
            }
        }
        an += (cn+1)/(k+1);
        cout<<an<<"\n";
    }
}