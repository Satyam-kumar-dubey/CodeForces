
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main ()
{
    int test;
    cin>>test;

    while(test--)
    {
        int size, noOfAns;
        cin>>size>>noOfAns;
        vector<int>first(size),second(size);
        
        for(int i=0; i<size; i++)
        cin>>first[i];
        for(int i=0; i<size; i++)
        cin>>second[i];

        vector<long long>maxi(size);
        for(int i=0; i<size; i++)
        maxi[i] = max(first[i],second[i]);

        for(int i=size-2; i>=0; i--)
        maxi[i] = max(maxi[i],maxi[i+1]);

        vector<long long>preSum(size);
        preSum[0] = maxi[0];

        for(int i=1; i<size; i++)
        preSum[i] = preSum[i-1] + maxi[i];

        while(noOfAns--)
        {
            int left,right;
            cin>>left>>right;
            
            left--;
            right--;

            long long ans = preSum[right] - (left > 0 ? preSum[left-1] : 0);
            cout<<ans<<" ";
        }
        cout<<endl;
    }
}