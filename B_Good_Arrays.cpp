
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

        if(v.size() == 1)
        {
            cout<<"NO"<<'\n';
            continue;
        }

        long long sum = 0, count = 0;
        for(int val : v)
        {
            sum += val;
            if(val == 1)
            count++;
        }

        if(sum == v.size())
        {
            cout<<"NO"<<'\n';
            continue;
        }
        else if(sum >= v.size()+count)
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }
    }
}