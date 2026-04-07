
#include<iostream>
using namespace std;

int solve(int a, int b) 
{
    while (b != 0)
    {
        int t = a % b;
        a=b;
        b=t;
    }
    return a;
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n,m,a,b;
        cin>>n>>m>>a>>b;
        int g1 = solve(n,a);
        int g2 = solve(m,b);
        int g3 = solve(n,m);

        if(g1 == 1 && g2 == 1 && (g3 <= 2))
        cout<<"YES"<<'\n';
        else
        cout<<"NO"<<'\n';
    }
}