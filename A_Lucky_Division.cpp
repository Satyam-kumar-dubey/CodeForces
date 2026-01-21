#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    int num;
    cin>>num;

    bool flag = false;
    vector<int>lucky = {4,7,47,74,77,444,474,477,744,774,777};
    for(int val : lucky)
    {
        if(num % val == 0)
        {
            flag = true;
            break;
        }
    }
    cout<<(!flag ? "NO" : "YES");
}