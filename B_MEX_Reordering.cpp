
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while (t--) 
    {
        int n;
        cin>>n;
        vector<int>v(n + 2, 0);

        for (int i=0; i<n; i++) 
        {
            int x;
            cin>>x;
            v[x]++;
        }
        if (v[0]==0) 
        {
            cout<<"NO"<<'\n';
        }
        else if (v[0] >= 2 && v[1] == 0) 
        {
            cout<<"NO"<<'\n';
        }
        else 
        {
            cout<<"YES"<<'\n';
        }
    }

    
}



#include <iostream>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        long long initialPile, neededPile;
        cin >> initialPile >> neededPile;

        if (neededPile > initialPile) {
            cout << -1 << '\n';
            continue;
        }
        if (neededPile == initialPile) {
            cout << 0 << '\n';
            continue;
        }

        long long minSize = initialPile;
        long long maxSize = initialPile;

        int minutes = 0;
        int answer = -1;

        
        while (minutes <= 60) {
            if (minSize <= neededPile && neededPile <= maxSize) {
                answer = minutes;
                break;
            }

            minSize = minSize / 2;           
            maxSize = (maxSize + 1) / 2;     
            minutes++;

            if (maxSize < neededPile) break;
        }

        cout << answer << '\n';
    }

    return 0;
}