
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
        int size;
        cin>>size;

        vector<int>arr(size);
        for(int i=0; i<size; i++)
        cin>>arr[i];

        int maxi = INT_MIN, maxIndex = 0;
        for(int i=0; i<size; i++)
        {
            if(arr[i] > maxi)
            {
                maxi = arr[i];
                maxIndex = i;
            }
        }
        if(maxIndex != 0)
        swap(arr[0],arr[maxIndex]);
        
        cout<<(arr[0]*size)<<endl;
    }
}