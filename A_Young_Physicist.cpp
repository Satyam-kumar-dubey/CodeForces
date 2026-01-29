
#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin>>test;

    int Xsum = 0, Ysum = 0, Zsum = 0;
    while(test--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        Xsum += x;
        Ysum += y;
        Zsum += z;
    }

    cout<<((Xsum==0 && Ysum == 0 && Zsum == 0) ? "YES" : "NO");
}