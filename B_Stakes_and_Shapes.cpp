
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        vector<int>v(3);
        cin>>v[0]>>v[1]>>v[2];

        string s = "PRS";

        int total = v[0] + v[1] + v[2];
        for(int i = 0; i < total; i++)
        {
            cout << s[max_element(v.begin(), v.end()) - v.begin()];
        }
        cout<<'\n';
    }
}