#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    int h,m;
    cin>>h>>m;

    int H=h, M=m;
    int c=1, a=1;

    for(int i = 1; i < n; i++)
    {
        cin>>h>>m;
        if(h==H && m==M)
        c++;
        else
        {
            c = 1;
            H = h;
            M = m;
        }

        if (c > a)
        a = c;
    }

    cout<<a<<'\n';
}