
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n,k,x;
        cin>>n>>k>>x;

        vector<int>pos(n);
        for(int i=0; i<n; i++)
        cin>>pos[i];

        int a = INT_MAX;
        int st=0, en=x;
        while(st < en)
        {
            int m = st + (en-st)/2;
            int tp = 0;

            for(int i=0; i<n; i++)
            tp += abs(m - pos[i]);

            if(tp < a)
            {
                a = m;
                en--;
            }
            else 
            st++;
        }
        cout<<a<<
    }
}