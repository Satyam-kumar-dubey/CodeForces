#include<iostream>
#include<string>
using namespace std;

char helper(char c)
{
    return (c == 'a' ? 'b' : 'a');
}
bool solve(const string &s, char st)
{
    int n = (int)s.size();

    auto tc = [&](int pos) -> char
    {
        if (pos % 2 == 0) return st;
        return helper(st);
    };
    int f=-1, sec=-1;
    for(int i = 0; i < n; i++)
    {
        if(s[i] != tc(i))
        {
            if (f == -1)
            f = i;
            sec = i;
        }
    }
    if (f == -1)
    return true;

    bool r = true;
    bool iAr = true;

    for (int i=f; i <= sec; i++)
    {
        char want = tc(f + sec - i);

        if (s[i] != want)
        r = false;
        if (s[i] == want)
        iAr = false;
    }

    return r || iAr;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin >> s;

        if (solve(s, 'a') || solve(s, 'b'))
        cout << "YES"<<"\n";
        else
        cout << "NO"<<"\n";
    }
}