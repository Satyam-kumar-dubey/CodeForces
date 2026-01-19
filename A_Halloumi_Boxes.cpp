#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int>&v)
{
    for(int i=1; i<v.size(); i++)
    {
        if(v[i] < v[i-1])
        {
            return false;
            break;
        }
    }
    return true;
}

int main ()
{
    int test;
    cin>>test;

    for(int i=0; i<test; i++)
    {
        int a,b;
        cin>>a>>b;
        vector<int>v(a);
        for(int j=0; j<a; j++)
        cin>>v[j];

        if(b==1 && !check(v))
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;

    }
}