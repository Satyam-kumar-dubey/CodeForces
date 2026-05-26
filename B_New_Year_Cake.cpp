
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        ll a, b;
        cin>>a>>b;

        int re = 0;

        ll w1 = 0, d1 = 0; 
        ll w2 = 0, d2 = 0; 

        ll ly = 1;

        for (int i = 1; i <= 20; i++)
        {
            
            if (i % 2 == 1)
            w1 += ly;
            else
            d1 += ly;


            if (i % 2 == 1)
            d2 += ly;
            else
            w2 += ly;

            
            if ((w1 <= a && d1 <= b) || (w2 <= a && d2 <= b))
            re = i;
            else
            break;

            ly *= 2; 
        }

        cout << re << endl;
    }

}
