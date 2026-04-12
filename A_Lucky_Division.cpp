
#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    bool f = false;
    vector<int>v={4,7,74,47,77,444,474,477,744,774,777};

    for(int it:v)
    {
        if(n%it == 0)
        {
            f = true;
            break;
        }
    }

    cout<<(!f ? "NO" : "YES")<<'\n';
}