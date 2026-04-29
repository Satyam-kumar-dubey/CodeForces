
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s;
    long long t;
    cin>>s>>t;
    vector<int>v(s);

    for(int i=0; i<s; i++)
    cin>>v[i];

    int st=0,en=0,tp=0;
    long long add=0;
    while(en < s)
    {
        add += v[en];
        while(add > t)
        {
            add -= v[st];
            st++;
        }
        tp = max(tp,en-st+1);
        en++;
    }
    cout<<tp<<"\n";
}