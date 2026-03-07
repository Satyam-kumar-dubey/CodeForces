
#include<iostream>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    while(n--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int count = 0;

        if(b > a)
        count++;
        if(c > a)
        count++;
        if(d > a)
        count++;

        cout<<count<<'\n';
    }
}