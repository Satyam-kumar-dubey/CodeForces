
#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    double s = 0, c = t;
    while(t--)
    {
        double n;
        cin>>n;
        s += n;
    }
    cout<<fixed<<setprecision(12)<<(s/c)<<'\n';
}