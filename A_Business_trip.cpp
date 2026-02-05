
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    vector<int>month(12);
    for(int i=0; i<12; i++)
    cin>>month[i];

    sort(month.begin(),month.end());

    if(n==0)
    cout<<0<<'\n';
    else
    {
        int sum = 0,count = 0;
        for(int i=month.size()-1; i>=0; i--)
        {
            sum += month[i];
            count++;
            if(sum >= n)
            break;
        }
        cout<<(sum < n ? -1 : count)<<'\n';
    }
}