#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin>>s;

        int h = stoi(s.substr(0, 2));
        string m = s.substr(3, 2);

        string lst;

        if(h == 0)
        {
            h = 12;
            lst = "AM";
        }
        else if(h < 12)
        {
            lst = "AM";
        }
        else if(h == 12)
        {
            lst = "PM";
        }
        else
        {
            h -= 12;
            lst = "PM";
        }

        cout<<setw(2)<<setfill('0')<<h<<":"<<m<<" "<<lst<<'\n';
    }
}