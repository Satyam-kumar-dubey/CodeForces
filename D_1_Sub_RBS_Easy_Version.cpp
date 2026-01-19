#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    int test;
    cin>>test;

    while(test--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        vector<int>totalCount(n+1,0);
        for(int i = n-1; i >= 0; i--)
        totalCount[i] = totalCount[i+1] + (s[i]=='(');

    

        int count = 0;
        bool flag = false;
 
        for(int i=0; i<n-1; i++)
        {
            if(s[i] == ')' && s[i+1] == '(')
            {
                if(totalCount[i+2] > 0)
                {
                    flag = true;
                    break;
                }
            }
        }
        cout<<(!flag ? -1 : n-2)<<endl;
    }
}