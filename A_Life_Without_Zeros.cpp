#include<iostream>
#include<string>
using namespace std;

int slv(int n)
{
    string s=to_string(n);
    string t = "";
    for (char c:s)
    {
        if (c!='0')
        t+=c;
    }
    return stoi(t);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;

    int c=a+b;
    int p = slv(a);
    int q = slv(b);
    int r = slv(c);

    if (p+q==r)
    cout<<"YES";
    else
    cout<<"NO";
}