
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int SoftDrink(vector<int>&v)
{
    int drink = (v[1]*v[2]) / v[6];
    int lime = v[3]*v[4];
    int salt = v[5] / v[7];

    int ans = min(drink,lime);
    ans = min(ans,salt);

    return (ans/v[0]);
}

int main ()
{
    vector<int>v(8);
    for (int i = 0; i < 8; i++)
    cin >> v[i];

    cout<<SoftDrink(v);
}