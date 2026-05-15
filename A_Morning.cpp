
#include<iostream>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        int cr = 1, a = 0;
        for(char c : s)
        {
            int n = c -'0';
            if(n == 0)
            n = 10;
            int d = abs(cr - n);
            a += d + 1;
            cr = n;
        }
        cout<<a<<'\n';
    }
}