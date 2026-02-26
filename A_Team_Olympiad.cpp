
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>o,t,th;

    int one=0,two=0,three=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i] == 1)
        {
            one++;
            o.push_back(i);
        }
        else if(a[i] == 2)
        {
            two++;
            t.push_back(i);
        }
        else
        {
            three++;
            th.push_back(i);
        }
    }
    int val = min({one,two,three});
    cout<<val<<'\n';

    for(int i=0; i<val; i++)
    cout<<o[i]+1<<" "<<t[i]+1<<" "<<th[i]+1<<'\n';
    
}