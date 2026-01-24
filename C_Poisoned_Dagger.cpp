
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool check(long long mid,vector<long long>&arr,long long health)
{
    for(long long i=0; i<(long long)arr.size()-1; i++)
    {
        long long diff = arr[i+1] - arr[i];
        health -= min(diff,mid);
    }
    health -= mid;
    return (health <= 0 ? true : false);
}

int main ()
{
    int test;
    cin>>test;

    while(test--)
    {
        long long attack,health;
        cin>>attack>>health;
        
        vector<long long>arr(attack);
        for(long long i=0; i<attack; i++)
        cin>>arr[i];

        if(health <= attack)
        {
            cout<<1<<endl;
            continue;
        }

        long long start = 1, end = health;
        while(start <= end)
        {
            long long mid = start + (end-start)/2;
            if(check(mid,arr,health))
            end = mid - 1;
            else
            start = mid + 1;
        }
        cout<<start<<endl;
    }
}