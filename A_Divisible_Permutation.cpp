#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        int l = 1, r = n;
        bool f=true;

        for (int i = n - 1; i >= 0; i--) {
            if (f) {
                v[i] = r;
                r--;
            } else {
                v[i] = l;
                l++;
            }
            f = !f;
        }
        for (int x : v)
        cout<<x<<" ";
        cout<<"\n";
    }
}