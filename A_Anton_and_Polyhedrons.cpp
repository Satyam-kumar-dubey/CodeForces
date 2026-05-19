
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;

    int a = 0;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;

        if(s == "Tetrahedron")
        a += 4;
        else if(s == "Cube")
        a += 6;
        else if(s == "Octahedron")
        a += 8;
        else if(s == "Dodecahedron")
        a += 12;
        else
        a += 20;
    }
    cout<<a<<'\n';
}
