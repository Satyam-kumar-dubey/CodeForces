
#include<iostream>
using namespace std;

int main ()
{
    int test;
    cin>>test;

    while(test--)
    {
        int size, k;
        cin>>size>>k;

        vector<long long>v(size);
        long long prod = 1;
        for(int i=0; i<size; i++)
        {
            cin>>v[i];
            prod *= v[i];
        }
        
        if(prod % k == 0)
        cout<<0<<'\n';
        else
        {}

        
    }
}