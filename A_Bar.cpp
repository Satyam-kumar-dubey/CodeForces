#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;

    int c=0;
    while(t--)
    {
        string s;
        cin>>s;
        if(isdigit(s[0]))
        {
            int x = stoi(s);
            if(x<18)
            c++;
        }
        else if( s == "ABSINTH" || s == "BEER" || s == "BRANDY" || s == "CHAMPAGNE" || s == "GIN" || s == "RUM"|| s == "SAKE"|| s == "TEQUILA" ||s == "VODKA"|| s == "WHISKEY" || s == "WINE" ) 
        c++;
    }

    cout<<c<<'\n';
}