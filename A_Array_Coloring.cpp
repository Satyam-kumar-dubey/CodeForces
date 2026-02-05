#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    int test;
    cin>>test;

    while(test--)
    {
        int size;
        cin>>size;

        vector<int>v(size);
        for(int i=0; i<size; i++)
        cin>>v[i];

        if(v[0] % 2 == 0)
        {
            bool flag = false;
            for(int i=2; i<size; i=i+2)
            {
                if(v[i] % 2 != 0)
                flag = true;
            }
            cout<<(!flag ? "YES" : "NO")<<'\n';
        }
        else if( v[0] % 2 != 0)
        {
            bool flag = false;
            for(int i=2; i<size; i=i+2)
            {
                if(v[i] % 2 == 0)
                flag = true;
            }
            cout<<(!flag ? "YES" : "NO")<<'\n';
        }
    }
        
    
}