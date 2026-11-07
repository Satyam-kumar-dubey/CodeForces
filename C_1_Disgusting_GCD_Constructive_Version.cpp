
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    const int val = 200100;

    vector<bool>v(val + 1, false);
    v[0] = v[1] = true;

    for (int i = 2; (ll)i * i <= val; i++)
    {
        if (!v[i])
        {
            for (int j = i * i; j <= val; j += i)
            v[j] = true;
        }
    }
    vector<int>arr(val);
    arr[val] = val;

    for (int i = val - 1; i >= 0; i--)
    arr[i] = v[i] ? arr[i + 1] : i;

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;

        for(int i = 0; i < n; i++)
        {
            int a;
            cin>>a;

            cout<<arr[a]<<" ";
        }
        cout<<"\n";
    }
}