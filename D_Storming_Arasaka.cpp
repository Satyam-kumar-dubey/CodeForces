
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int x = n;
        int mul = 0, pf = 0;

        for (int i = 2; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                pf++;
                while (x % i == 0)
                {
                    mul++;
                    x /= i;
                }
            }
        }

        if (x > 1)
        {
            pf++;
            mul++;
        }

        int ans = mul;

        if(pf == 2)
        ans++;
        else if (pf >= 3)
        ans += 2;

        cout<<ans<<'\n';
    }
}