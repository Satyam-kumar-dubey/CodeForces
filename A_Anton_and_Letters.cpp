
#include<iostream>
#include<string>
#include<set>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin,s);

    set<char>st;
    for(char c : s)
    {
        if( c >= 'a' && c <= 'z')
        st.insert(c);
    }
    cout<<st.size()<<'\n';
}