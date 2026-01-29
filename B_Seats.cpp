#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while (test--) 
    {

        int size;
        string s;
        cin>>size>>s;

        int CountOfOne = 0;
        for (char c : s)
        {   if (c == '1')
            CountOfOne++;
        }
        int add = 0;

        for (int i = 0; i < size; ) 
        {
            if (s[i] == '0') 
            {
                int j = i;
                while (j < size && s[j] == '0')
                j++;

                int len = j-i;

                bool left = (i > 0 && s[i - 1] == '1');
                bool right = (j < size && s[j] == '1');

                if (left && right) 
                {
                    add += len / 3;           
                } else if (left || right) 
                {
                    add += (len + 1) / 3;     
                } else 
                {
                    add += (len + 2) / 3;     
                }

                i = j;
            } else 
            {
                i++;
            }
        }

        cout<<CountOfOne + add << "\n";
    }
}