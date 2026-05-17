#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while(t--)
    {
        string s1,s2,s3;
        cin>>s1>>s2>>s3;

        string a = "";
        a += s1[0];
        a += s2[0];
        a += s3[0];

        cout<<a<<'\n';
    }
}