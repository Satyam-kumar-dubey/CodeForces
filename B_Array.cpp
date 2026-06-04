#include <bits/stdc++.h>
using namespace std;

void arrindx(vector<int>& arr)
{
    vector<int> ans(arr.size(), 0);

    for(int i = 0; i < (int)arr.size() - 1; i++)
    {
        int g = 0, s = 0;

        for(int j = i + 1; j < (int)arr.size(); j++)
        {
            if(arr[i] > arr[j])
                s++;
            else if(arr[i] < arr[j])
                g++;
        }

        ans[i] = max(g, s);
    }

    for(int i = 0; i < (int)ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests;
    cin >> tests;

    while(tests--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        arrindx(arr);
    }

    return 0;
}