#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string n,c,x;
    cin>>n>>c>>x;
    string t = n + c;
    if(t.size() != x.size())
    {
        cout<<"NO";
        return 0;
    }
    sort(t.begin(),t.end());
    sort(x.begin(),x.end());
    cout<<(x == t ? "YES" : "NO")<<'\n';
}