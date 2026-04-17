#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    int s1 = 0, s2 = 0, s3 = 0;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        s1 += a;
        s2 += b;
        s3 += c;
    }
    cout<<((s1==0 && s2==0 && s3==0) ? "YES" : "NO");
}