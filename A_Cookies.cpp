
#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    int bags;
    cin>>bags;
    
    vector<int>arr(bags);
    for(int i=0; i<bags; i++)
    cin>>arr[i];

    int totalSum = 0, even = 0, odd = 0;
    for(int val : arr)
    {
        totalSum += val;
        if(val % 2 == 0)
        even++;
        else
        odd++;
    }

    cout<<(totalSum % 2 == 0 ? even : odd);
}