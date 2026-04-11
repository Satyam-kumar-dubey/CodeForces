#include <iostream>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string x;
    cin>>x;
    int st=0, en=x.size()-1,c=0;

    while(st < en)
    {
        if(x[st]!=x[en])
        c++;
        st++; 
        en--;
    }

    if(c==0 && x.size()%2!=0)
    cout<<"YES";
    else
    cout<<(c == 1 ? "YES" : "NO");
}