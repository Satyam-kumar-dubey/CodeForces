#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int x;
        cin>>x;

        int s=0;
        for (int i = 0; i < x; i++)
        {
            int x;
            cin>>x;
            s+=x;
        }
        if(s % 2==0)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
}