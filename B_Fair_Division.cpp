
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int on = 0, tw = 0;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if(x == 1)
            on++;
            else
            tw++;
        }

        int sum = on + (2 * tw);

        if(sum % 2 != 0)
        cout << "NO" << '\n';
        else if(on == 0 && (sum / 2) % 2 != 0)
        cout << "NO" << '\n';
        else
        cout << "YES" << '\n';
    }
}