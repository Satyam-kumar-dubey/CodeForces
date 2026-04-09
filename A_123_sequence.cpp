#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    int a=0, b=0, c=0;
    for(int i=0; i<n; i++)
    {
        int t;
        cin>>t;

        if (t == 1)
        a++;
        else if (t == 2)
        b++;
        else
        c++;
    }
    cout<<n - max({a, b, c})<<'\n';
}