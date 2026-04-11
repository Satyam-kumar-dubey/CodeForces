
#include<iostream>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k,n,w;
    cin>>k>>n>>w;

    int c=0;
    while(w)
    {
        c += (k*w);
        w--;
    }
    cout<<(c>n ? c-n : 0)<<'\n';
}