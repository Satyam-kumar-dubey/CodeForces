
#include<iostream>
#include<string>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string first, second;
    cin>>first>>second;
    int n;
    cin>>n;

    cout<<first<<" "<<second<<'\n';

    while(n--)
    {
        string murdered, replaced;
        cin>>murdered>>replaced;

        if(first == murdered)
        first = replaced;
        else
        second = replaced;

        cout<<first<<" "<<second<<'\n';
    }
}