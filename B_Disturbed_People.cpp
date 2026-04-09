#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    int s, c=0;
    cin>>s;
    vector<int>v(s);
    for(int i =0; i<s; i++)
    cin>>v[i];

    for(int j=1; j<v.size()-1; j++)
    {
        if(v[j]==0 && v[j-1]==1 && v[j+1]==1)
        {
            c++;
            v[j+1]=0;
        }
    }

    cout<<c;
}