
#include<iostream>
#include<unordered_map>
#include<climits>
#include<string>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin>>test;
    unordered_map<string,int>m;

    while(test--)
    {
        string s;
        cin>>s;

        if(m.count(s))
        m[s]++;
        else
        m[s] = 1;
    }
    int maxiVal = INT_MIN;
    string maxiString;
    
    for(auto &it : m)
    {
        if(it.second > maxiVal)
        {
            maxiVal = it.second;
            maxiString = it.first;
        }
    }
    cout<<maxiString<<'\n';
}