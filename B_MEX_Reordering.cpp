
#include <iostream>
#include<vector>
using namespace std;

int main() {

    int totalTestCases;
    cin>>totalTestCases;

    while (totalTestCases--) 
    {
        int size;
        cin>>size;
        vector<int> arr(size + 2, 0);

        for (int i=0; i<size; i++) 
        {
            int value;
            cin>>value;
            arr[value]++;
        }
        if (arr[0]==0) 
        {
            cout<<"NO"<<'\n';
        }
        else if (arr[0] >= 2 && arr[1] == 0) 
        {
            cout<<"NO"<<'\n';
        }
        else 
        {
            cout<<"YES"<<'\n';
        }
    }

    
}
