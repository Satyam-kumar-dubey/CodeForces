#include<iostream>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,a,b,c;
    cin>>n;
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b>>c;
        if(a+b+c >= 2)
        cnt++;
    }
    cout<<cnt<<'\n';
}