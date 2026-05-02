
#include<iostream>
#include<string>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s,a;
    cin>>s;

    int it = 0;
    while(it < s.size())
    {
        if(s[it] == '.')
        {
            a += '0';
            it++;
        }
        else
        {
            if(s[it] == '-')
            {
                if(s[it+1] == '.')
                a += '1';
                else
                a += '2';
                it = it + 2;
            }
        }
    }
    cout<<a<<'\n';
}