
#include<iostream>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,h;
    cin>>n>>h;

    int t = n, c = 0;
    while(t--)
    {
        int x;
        cin>>x;

        if(x > h)
        c++;
    }
    cout<<(c*2)+(n-c)<<'\n';
}