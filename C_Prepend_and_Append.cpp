
#include<iostream>
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
        int size;
        cin>>size;
        string s;
        cin>>s;

        int it1 = 0, it2 = s.size()-1;
        while(it1 < it2 && s[it1] != s[it2])
        {
            it1++;
            it2--;
        }
        int ans = it2 - it1 +1;
        cout<<(ans < 0 ? 0 : ans)<<'\n';
    }
}