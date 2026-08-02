#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void in(vector<int>&v)
{
    for(auto &x: v)
    cin>>x;
}
bool prime(ll n)
{
    if(n <= 1)
    return false;
    for(ll i=2; i*i <= n; i++)
    {
        if(n%i == 0)
        return false;
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    in(arr);

    int c = 0;
    bool b = true;

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        continue;
        else
        {
            while (arr[i] > 0)
            {
                arr[i] /= 2;
                c++;

                if (arr[i] < arr[i + 1])
                {
                        break;
                }
            }

            if (arr[i] >= arr[i + 1])
            {
                b = false;
                break;
            }
        }
    }

    cout << (b ? c : -1) << '\n';
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
    
}
