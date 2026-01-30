
#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    int size;
    cin>>size;
    
    vector<int>home(size),guest(size);
    for(int i=0; i<size; i++)
    cin>>home[i]>>guest[i];

    int count = 0;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(i != j && home[i] == guest[j])
            count++;
        }
    }
    cout<<count<<'\n';
   
}