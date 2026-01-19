#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int a, k;
        cin >> a >> k;

        vector<int> arr(a);
        for (int i = 0; i < a; i++)
            cin >> arr[i];

        if (k > a)
        {
            cout << 0 << endl;
            continue;
        }

        vector<int> present(k + 1, 0);

        for (int i = 0; i < k; i++)
            if (arr[i] <= k)
                present[arr[i]]++;

        auto mex = [&]() {
            for (int i = 0; i <= k; i++)
                if (present[i] == 0)
                    return i;
            return k + 1;
        };

        int ans = mex();

        for (int i = k; i < a; i++)
        {
            if (arr[i - k] <= k)
                present[arr[i - k]]--;

            if (arr[i] <= k)
                present[arr[i]]++;

            ans = min(ans, mex());
        }

        cout << ans << endl;
    }
}
