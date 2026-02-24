
#include<iostream>
#include<vector>
#include<algorithm>
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

        vector<long long>a(size);
        vector<long long>b(size);
        for(int i=0; i<size; i++)
        cin>>a[i];
        for(int i=0; i<size; i++)
        cin>>b[i];

        long long diff = 0;
        for(int i=0; i<size; i++)
        diff = max(diff, (a[i] - b[i]));

        bool flag = true;
        for(int i=0; i<size; i++)
        {
            if(a[i] < b[i])
            {
                flag = false;
                break;
            }
            if(b[i] > 0)
            {
                if((a[i] - b[i]) != diff)
                {
                    flag = false;
                    break;
                }
            }
            else
            {
                if(a[i] > diff)
                {
                    flag = false;
                    break;
                }
            }
        }
        cout<<(flag ? "YES" : "NO")<<'\n';
    }
}