
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int s;
    cin>>s;

    vector<int>v(s);
    for(int i=0; i<s; i++)
    cin>>v[i];

    int mx = v[0], mn = v[0], a = 0;
    for(int i=1; i<s; i++)
    {
        if(v[i] > mx)
        {
            mx = v[i];
            a++;
        }
        else if(v[i] < mn)
        {
            mn = v[i];
            a++;
        }
    }
    cout<<a<<'\n';
}