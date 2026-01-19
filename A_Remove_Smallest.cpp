
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string solve(vector<int>&v)
{
    if(v.size() == 1)
    return "YES";
    sort(v.begin(),v.end());

    for(int i=1; i<v.size(); i++)
    {
        if(v[i]-v[i-1] > 1)
        return "NO";
    }
    return "YES";

}

int main ()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        vector<int>v(a);
        for(int j=0; j<a; j++)
        {
            cin>>v[j];
        }
        cout<<solve(v)<<endl;
    }
}