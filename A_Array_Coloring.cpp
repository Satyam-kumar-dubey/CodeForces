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
        vector<int>arr(size);

        for(int i=0; i<size; i++)
        cin>>arr[i];

        int sum = 0,even = 0,odd = 0;
        for(int val : arr)
        {
            sum += val;
            if(val % 2 == 0)
            even++;
            else
            odd++;
        }
        
        if(sum % 2 != 0)
        cout<<"NO"<<'\n';
        else
        {
            if(even > 0 || odd >= 2)
            cout<<"YES"<<'\n';
            else
            cout<<"NO"<<'\n';
        }
        
    }
}