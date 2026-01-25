
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
        int size;
        cin>>size;
        vector<int>arr(size);
        
        for(int i=0; i<size; i++)
        cin>>arr[i];

        vector<int>suff(size),index(size);
        suff[size-1] = arr[size-1];
        index[size-1] = size - 1;

        for(int i=size-2; i>=0; i--)
        {
            if(suff[i+1] > arr[i])
            {
                suff[i] = suff[i+1];
                index[i] = index[i+1];
            }
            else
            {
                suff[i] = arr[i];
                index[i] = i;
            }
        }

        int left = -1, right = -1;
        for(int i=0; i<size; i++)
        {
            if(suff[i] > arr[i])
            {
                left = i;
                right = index[i];
                break;
            }
        }
        if(left != -1)
        reverse(arr.begin()+left, arr.begin()+right+1);

        for(int i=0; i<size; i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}