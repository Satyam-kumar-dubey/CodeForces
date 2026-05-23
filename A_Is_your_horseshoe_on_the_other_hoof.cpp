
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int f,se,th,fr;
    cin>>f>>se>>th>>fr;

    set<int>s;
    s.insert(f);
    s.insert(se);
    s.insert(th);
    s.insert(fr);

    cout<<(s.size() == 4 ? 0 : (4 - s.size()))<<'\n';
}