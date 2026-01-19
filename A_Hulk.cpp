#include<iostream>
using namespace std;

int main ()
{
    int num;
    cin>>num;
    
    string s1  = "I hate";
    string s2 = "I love";

    string ans = "";
    int count = 0;
    while(count != num)
    {
        ans += s1;
        count++;

        if(count == num)
        {
            cout<<(ans +" "+ "it");
            break;
        }
         
        ans += " that ";
        ans += s2;
        count++;
        if(count == num)
        {
            cout<<(ans + " "+ "it");
            break;
        }
        ans += " that ";
    }
}