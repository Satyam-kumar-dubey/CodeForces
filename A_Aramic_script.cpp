#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    set<string>st;

    while(t--)
    {
        string str;
        cin>>str;
        sort(str.begin(), str.end());
        str.erase(unique(str.begin(), str.end()), str.end());
        st.insert(str);
    }
    cout<<st.size()<<'\n';
}