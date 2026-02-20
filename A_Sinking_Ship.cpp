
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin>>test;

    vector<string>womanAndChild, man, rat;
    string captainName;
    while(test--)
    {
        string name, position;
        cin>>name>>position;

        if(position == "rat")
        rat.push_back(name);
        else if(position == "child" || position == "woman")
        womanAndChild.push_back(name);
        else if(position == "man")
        man.push_back(name);
        else
        captainName = name;
    }
    for(string &s : rat)
    cout<<s<<'\n';
    
    for(string &s : womanAndChild)
    cout<<s<<'\n';

    for(string &s : man)
    cout<<s<<'\n';

    cout<<captainName<<'\n';
}