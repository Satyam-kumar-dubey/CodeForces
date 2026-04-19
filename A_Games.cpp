#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    
    vector<int>h(t),g(t);
    for(int i=0; i<t; i++)
    cin>>h[i]>>g[i];

    int c=0;
    for(int i=0; i<t; i++)
    {
        for(int j=0; j<t; j++)
        {
            if(i!=j && h[i]==g[j])
            c++;
        }
    }
    cout<<c<<"\n";
}