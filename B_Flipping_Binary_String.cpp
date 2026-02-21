#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        int size;
        cin >> size;
        string s;
        cin >> s;
        vector<int> one, zero;

        for (int i=0; i<size; i++) 
        {
            if (s[i]=='1') 
            one.push_back(i + 1);
            else 
            zero.push_back(i + 1);
        }
        int ones = one.size();
        int zeros = zero.size();

        if (ones % 2 == 0) 
        {
            cout << ones << "\n";
            for (int it : one) 
            cout << it << " ";
            cout << "\n";
        }
        else if (zeros % 2 == 1) 
        {
            cout<<zeros<<"\n";
            for (int it : zero) 
            cout << it << " ";
            cout << "\n";
        }
        else 
        cout<<-1<<"\n";
    }
}