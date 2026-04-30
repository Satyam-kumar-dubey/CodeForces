#include<iostream>
#include<map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;

    map<string, int> m;
    string s;

    for (int i = 0; i < n; i++)
    {
        cin>>s;
        m[s]++;
    }

    string a;
    int t=0;
    for (auto it : m)
    {
        if (it.second > t)
        {
            t = it.second;
            a = it.first;
        }
    }
    cout<<a<<"\n";
}