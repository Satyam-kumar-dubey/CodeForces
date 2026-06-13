
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int x1,y1,x2,y2,x3,y3,x4,y4;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;

        int mx = max({x1,x2,x3,x4});
        int my = max({y1,y2,y3,y4});
        int mnx = min({x1,x2,x3,x4});
        int mny = min({y1,y2,y3,y4});

        int s = min(mx-mnx, my-mny);
        cout<<s*s<<'\n';
    }
}