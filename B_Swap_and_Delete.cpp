
#include<iostream>
#include<string>
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

        int zero = 0, one = 0;
        for(char c : s)
        {
            if(c == '0')
            zero++;
            else
            one++;
        }

        bool flag = false;
        for(char c : s)
        {
            if(c == '0')
            {
                if(one >0)
                one--;
                else
                {
                    cout<<zero<<'\n';
                    flag = true;
                    break;
                }
            }
            else
            {
                if(zero > 0)
                zero--;
                else
                {
                    cout<<one<<'\n';
                    flag = true;
                    break;
                }
            }
        }
        if(!flag)
        cout<<0<<'\n';
    }
}