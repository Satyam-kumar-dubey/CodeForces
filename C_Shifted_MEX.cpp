
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
        vector<long long>arr(size);
        for(int i=0; i<size; i++)
        cin>>arr[i];

        long long mex = 0;

        for(int i=0; i<size; i++)
        {
            vector<bool>visited(size+1,0);
            long long shiftingValue = -(arr[i]);

            for(long long val : arr)
            {
                long long shifted = shiftingValue + val;
                if(shifted >=0 && shifted <= size)
                visited[shifted] = 1;
            }

            long long tempMex = 0;
            while(tempMex <= size && visited[tempMex])
            tempMex++;

            mex = max(mex,tempMex);

            if(mex == size)
            break;
        }
        cout<<mex<<endl;
    }
}