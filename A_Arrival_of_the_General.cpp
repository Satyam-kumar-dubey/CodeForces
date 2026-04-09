
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,mi = INT_MAX, ma = INT_MIN, s = -1, b = -1;
    cin>>n;
    vector<int>v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i] > ma)
        {
            ma = v[i];
            b = i;
        }
        if(v[i] <= mi)
        {
            mi = v[i];
            s = i;
        }
    }
    int a = b+(n-1-s);
    cout<<(b>s ? a-1 : a)<<'\n';
}