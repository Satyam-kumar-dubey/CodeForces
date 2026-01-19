
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;

int main ()
{
    unordered_set<string>st;
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;

        vector<char>ch(26,0);
        string key = "";

        for(char c : s)
        {
            if(!ch[c-'a'])
            {
                ch[c-'a']= 1;
                key += c;
            }
        }

        sort(key.begin(),key.end());
        st.insert(key);
    }


    cout<<st.size();
}