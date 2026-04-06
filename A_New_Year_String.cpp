
#include<iostream>
#include<string>
using namespace std;

int solve(const string& s)
{
    int f = s.find("2026");
    int sec = s.find("2025");

    if(f != string::npos || sec == string::npos)
    return 0;

    return 1;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        cin.ignore(); 

        string s;
        getline(cin, s);
        cout<<solve(s)<<"\n";
    }
}