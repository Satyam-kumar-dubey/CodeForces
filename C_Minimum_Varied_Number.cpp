
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin>>test;
    vector<int>arr = {9,8,7,6,5,4,3,2,1,0};

    while(test--)
    {
        int num;
        cin>>num;

        string ans;
        for(int i=0; i<arr.size(); i++)
        {
            if(num >= arr[i])
            {
                num -= arr[i];
                ans += to_string(arr[i]);
            }
            if(num == 0)
            break;
        }
        sort(ans.begin(),ans.end());
        int res = stoi(ans);
        cout<<ans<<'\n';
    }
}