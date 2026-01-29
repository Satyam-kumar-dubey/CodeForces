
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main ()
{
    int no;
    cin>>no;

    vector<int>soldiers(no);
    for(int i=0; i<no; i++)
    cin>>soldiers[i];

    int firstIndex = -1, secondIndex = -1, mini = INT_MAX;
    for(int i=0; i<no; i++)
    {
        int diff = abs(soldiers[i] - (soldiers[(i+1) % no]));
        if(diff < mini)
        {
            mini = diff;
            firstIndex = i;
            secondIndex = ((i+1) % no);
        }
    }
    cout<<firstIndex+1<<" "<<secondIndex+1<<'\n';
}