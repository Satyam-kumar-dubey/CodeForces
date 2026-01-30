
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin>>test;

    while(test--)
    {
        int size,toDelete;
        cin>>size>>toDelete;
        string s;
        cin>>s;

        vector<int>temp(26,0);
        for(int i=0; i<size; i++)
        {
            temp[s[i]-'a']++;
        }
        
        int count = 0;
        for(int val : temp)
        {
            if(val % 2 != 0)
            count++;
        }
        
        cout<<(count <= toDelete + 1 ? "YES" : "NO");
        cout<<'\n';
        
    }
}