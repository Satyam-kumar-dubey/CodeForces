
#include<iostream>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        long long t=a+b+c;
        long long mH=t/9;

        if(t%9==0 && min({a, b, c}) >= t/9)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
}