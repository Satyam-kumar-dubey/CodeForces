
#include<iostream>
using namespace std;

int main ()
{
    int test;
    cin>>test;

    while(test--)
    {
        string s;
        cin>>s;

        if(s.size() == 1)
        {
            cout<<1<<'\n';
            continue;
        }

        string temp = s;
        sort(temp.begin(),temp.end());

        int zero = 0, one = 0;
        for(char c : s)
        {
            if(c == '0')
            zero++;
            else
            one++;
        }
        if(zero == one)
        {
            cout<<0<<'\n';
        }
        else
        {
            cout<<(one+zero) - 2<<'\n';
        }
    }
}