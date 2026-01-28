
#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    int test;
    cin>>test;

    while(test--)
    {
        int size,operations;
        long long limit;
        cin>>size>>operations>>limit;

        vector<int>arr(size);
        for(int i=0; i<size; i++)
        cin>>arr[i];

        vector<int>ans(size);
        for(int i=0; i<size; i++)
        ans[i] = arr[i];

        while(operations--)
        {
            int pos;
            long long value;
            cin>>pos>>value;

            ans[pos-1] += value;
            if(ans[pos-1] > limit)
            ans = arr;
        }
        for(int i=0; i<size; i++)
        cout<<ans[i]<<" ";

        cout<<endl;
    }
}