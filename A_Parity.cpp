
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b, k;
    cin>>b>>k;

    vector<int>a(k);

    if (b % 2 == 0)
    {
        for (int i = 0; i < k; i++)
        cin>>a[i];

        if(a[k - 1] % 2)
        cout<<"odd\n";
        else
        cout<<"even\n";
    }
    else
    {
        int tp = 0;

        for(int i = 0; i < k; i++)
        {
            cin >> a[i];
            tp ^= (a[i] & 1);
        }

        if (tp)
        cout<<"odd\n";
        else
        cout<<"even\n";
    }

}