#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s;
    cin>>s;
    
    vector<int>v(s);

    for(int i=0; i<s; i++)
    cin>>v[i];
    int t=0,e=0,o=0;
    for(int i : v)
    {
        t += i;
        if(i%2==0)
        e++;
        else
        o++;
    }
    cout<<(t%2==0 ? e : o)<<'\n';
}