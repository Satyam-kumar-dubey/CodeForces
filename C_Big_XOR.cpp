
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
        int k = (1 << (32 - __builtin_clz(n))) - 1; 

        int xr = 0;
        for(int i = 1; i <= n; i++)
            xr ^= i;

        int b[22] = {0}, cmb[22] = {0};   

        vector<int> idx;                              
        for(int i = 1; i <= n; i++)
        {
            int x = i ^ (2 * i), msk = 0;

            for(int j = 21; j >= 0; j--)
            {
                if(!((x >> j) & 1))
                    continue;

                if(b[j])
                { 
                    x ^= b[j];
                    msk ^= cmb[j];
                }
                else
                {
                    msk ^= 1 << idx.size();
                    idx.push_back(i);
                    b[j] = x;
                    cmb[j] = msk;
                    break;
                }
            }
        }

        vector<int> ans(n + 1, 0);
        for(int target : {2 * k, 2 * k + 1})
        {
            int need = xr ^ target, msk = 0;
            bool ok = true;

            for(int i = 21; i >= 0 && ok; i--)
            {
                if(!((need >> i) & 1))
                    continue;

                if(!b[i])
                    ok = false;
                else
                { 
                    need ^= b[i];
                    msk ^= cmb[i];
                }
            }
            if(ok)
            {
                for(int j = 0; j < (int)idx.size(); j++)
                {
                    if((msk >> j) & 1)
                    ans[idx[j]] = 1;
                }
                break;
            }
        }

        for(int i = 1; i <= n; i++)
        cout << ans[i] << " \n"[i == n];
    }
}