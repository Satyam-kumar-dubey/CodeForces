

#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s;
    cin>>s;

    vector<int>v(s);
    for(int i = 0; i < s; i++)
    cin >> v[i];

    int f = 0, sc = 0, it1 = 0, it2 = s - 1;
    bool trn = true; 

    while(it1 <= it2)
    {
        int tk;
        if(v[it1] > v[it2]) tk = v[it1++];
        else tk = v[it2--];

        if(trn)
        f += tk;
        else
        sc += tk;

        trn = !trn;
    }

    cout << f << " " << sc << '\n';
}