
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int solve1(vector<int>a, vector<int>b)
{
    bool f = true;
    for(int i=0; i<a.size(); i++)
    {
        if(b[i] > a[i])
        {
            f = false;
            break;
        }
    }
    if(!f)
    return -1;
    
    int cst = 0;
    for(int i=0; i<a.size(); i++)
    cst += abs(a[i] - b[i]);

    return cst;
}

int solve2(vector<int>a, vector<int>b)
{
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    bool f = true;
    for(int i=0; i<a.size(); i++)
    {
        if(b[i] > a[i])
        {
            f = false;
            break;
        }
    }
    if(!f)
    return -1;

    int cst = 0;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i] != b[i])
        cst += abs(a[i] - b[i]);
    }
    return cst;
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    while(t--)
    {
        int n,c;
        cin>>n>>c;

        vector<int>a(n),b(n);
        for(auto &x : a)
        cin>>x;

        for(auto &x: b)
        cin>>x;

        int val1 = solve1(a,b);
        int val2 = solve2(a,b);

        if(val2 != -1) 
        val2 += c;

        if(val1 == -1 && val2 == -1)
        cout << -1 << "\n";
        else if(val1 == -1)
        cout << val2 << "\n";
        else if(val2 == -1)
        cout << val1 << "\n";
        else
        cout << min(val1, val2) << "\n";
    }
    
}
