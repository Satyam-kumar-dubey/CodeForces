#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        int total = 0,maxi = 0,i = 0;
        while(i<s.size())
        {
            if(s[i]=='.')
            {
                int count = 0;
                while(i<s.size() && s[i] != '#')
                {
                    count++;
                    i++;
                }
                maxi = max(maxi,count);
                total += count;
            }
            i++;
        }
        cout<<(maxi >= 3 ? 2: total)<<endl;
    }
}