#include<iostream>
using namespace std;

int main ()
{
    int test;
    cin>>test;

    while(test--)
    {
        int n,m;
        cin>>n>>m;
        string s1,s2;
        cin>>s1>>s2;

        if(s1.find(s2) != string::npos)
        {
            cout<<0<<endl;
            continue;
        }

        int count = 0;
        bool flag = false;
        while(s1.size() < 2*s2.size() || count == 0)
        {
            s1 += s1;
            count++;
            if(s1.find(s2) != string::npos)
            {
                cout<<count<<endl;
                flag = true;
                break;
            }
            
        }
        if(!flag)
        cout<<-1<<endl;
    }
}