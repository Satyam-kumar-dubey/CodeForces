
#include<iostream>
#include<vector>
using namespace std;

int main ()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int test;
    cin>>test;

    while(test--)
    {
        int size;
        cin>>size;
        vector<int>v(size);

        bool flag = false;
        for(int i=0; i<size; i++)
        {
            cin>>v[i];
            if(v[i] == 67)
            flag = true;
        }

        cout<<(!flag ? "NO" : "YES")<<'\n';
    }
}