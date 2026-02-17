
#include<iostream>
using namespace std;

int main ()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int test;
    cin>>test;

    while(test--)
    {
        long long a,b;
        cin>>a>>b;

        long long ans = (long long)4e18;

        for(int i=0; i<=40; i++)
        {
            long long temp = b+i;
            long long ops = 0;
            long long val = a;

            if(temp == 1)
            continue;

            while(val > 0)
            {
                val /= temp;
                ops++;
            }
            ans = min(ans,(long long)ops+i);
        }
        cout<<ans<<'\n';
    }
}