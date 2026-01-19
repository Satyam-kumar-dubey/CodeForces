
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int count=0;
    while(n--)
    {
        string val;
        cin>>val;

        if(isdigit(val[0]))
        {
            int age = stoi(val);
            if(age < 18)
            count++;
        }
        else if( val == "ABSINTH" || val == "BEER" || val == "BRANDY" || val == "CHAMPAGNE" || val == "GIN" || val == "RUM"|| val == "SAKE"|| val == "TEQUILA" ||val == "VODKA"|| val == "WHISKEY" || val == "WINE" ) 
        count++;
    }
    cout<<count;
}