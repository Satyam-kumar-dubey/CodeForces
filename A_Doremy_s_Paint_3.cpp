
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main ()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        cin>>v[i];

        unordered_map<int,int>m;
        for(int val : v)
        m[val]++;

        if(m.size()>2)
        {
            cout<<"No"<<endl;
            continue;
        }
        if(m.size()==1)
        {
            cout<<"Yes"<<endl;
            continue;
        }
        int first = 0,second = 0;
        for(auto &i : m)
        {
            if(!first)
            first = i.second;
            else
            second = i.second;
        }
        if(abs(first - second) > 1)
        cout<<"No"<<endl;
        else
        cout<<"Yes"<<endl;
    }
}