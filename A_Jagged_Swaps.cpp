
#include<iostream>
#include<vector>
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
        vector<int>v(n);
        for(int i=0; i<n; i++)
        cin>>v[i];

        int smallest = INT_MAX;
        for(int i=1; i<n; i++)
        smallest = min(smallest,v[i]);

        if(smallest > v[0])
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}