
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;

    vector<char> nums;
    for(char c : s)
    {
        if (c != '+') 
        nums.push_back(c);
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++)
    {
        if (i > 0)
        cout<<"+";
        cout << nums[i];
    }

}