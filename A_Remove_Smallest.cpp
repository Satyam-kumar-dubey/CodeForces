#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string s(vector<int>&a)
{
    if(a.size() == 1)
    return "YES";

    sort(a.begin(),a.end());

    for(int i=1; i<a.size(); i++)
    {
        if(a[i]-a[i-1] > 1)
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
        int x;
        cin>>x;

        vector<int>a(x);
        for(int j=0; j<x; j++)
        {
            cin>>a[j];
        }
        cout<<s(a)<<endl;
    }
}