
#include<iostream>
#include<set>
using namespace std;

int main ()
{
    int first,second,third,fourth;
    cin>>first>>second>>third>>fourth;

    set<int>s;
    s.insert(first);
    s.insert(second);
    s.insert(third);
    s.insert(fourth);

    cout<<(s.size() == 4 ? 0 : (4 - s.size()))<<'\n';
}