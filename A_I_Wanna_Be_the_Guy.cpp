
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    int fsize;
    cin>>fsize;
    vector<int>first(fsize);
    for(int i=0; i<fsize; i++)
    cin>>first[i];

    int secsize;
    cin>>secsize;
    vector<int>second(secsize);
    for(int i=0; i<secsize; i++)
    cin>>second[i];

    unordered_map<int,int>m;

    for(int val : first)
    m[val]++;

    for(int val: second)
    m[val]++;

    bool flag = false;
    for(int i=1; i<=n; i++)
    {
        if(!m.count(i))
        {
            flag = true;
            break;
        }
    }
    cout<<(!flag ? "I become the guy." : "Oh, my keyboard!")<<'\n';
}