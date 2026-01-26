
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string newYearMan, christmasMan, shuffled;
    cin>>newYearMan>>christmasMan>>shuffled;

    string temp = newYearMan + christmasMan;
    
    if(temp.size() != shuffled.size())
    {
        cout<<"NO";
        return 0;
    }
    
    sort(temp.begin(),temp.end());
    sort(shuffled.begin(),shuffled.end());

    cout<<(shuffled == temp ? "YES" : "NO");
}