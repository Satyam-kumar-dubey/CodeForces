
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    vector<string>wc, man, rat;
    string captainName;
    while(t--)
    {
        string name, pos;
        cin>>name>>pos;

        if(pos == "rat")
        rat.push_back(name);
        else if(pos == "child" || pos == "woman")
        wc.push_back(name);
        else if(pos == "man")
        man.push_back(name);
        else
        captainName = name;
    }
    for(string &s : rat)
    cout<<s<<'\n';
    
    for(string &s : wc)
    cout<<s<<'\n';

    for(string &s : man)
    cout<<s<<'\n';

    cout<<captainName<<'\n';
}