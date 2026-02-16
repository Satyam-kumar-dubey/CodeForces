
#include<iostream>
#include<vector>
using namespace std;

int solve(int n)
{
    while((n & 1) == 0)
    n = n >> 1;

    return n;
}

int main ()
{
    int test;
    cin>>test;

    while(test--)
    {
        int size;
        cin>>size;

        vector<int>v(size+1);
        for(int i=1; i<=size; i++)
        cin>>v[i];

        bool flag = false;
        for(int i=1; i<=size; i++)
        {
            if(solve(i) != solve(v[i]))
            {
                flag = true;
                break;
            }
        }        
        cout<<(!flag ? "YES" : "NO")<<'\n';
    }
}