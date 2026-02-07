#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;

    while (test--)
    {
        int size;
        cin >> size;

        vector<long long> arr(size);
        for (int i = 0; i < size; i++)
            cin >> arr[i];

        // prefix max (THIS PART WAS RIGHT IN YOUR CODE)
        vector<long long> pre(size);
        pre[0] = arr[0];
        for (int i = 1; i < size; i++)
            pre[i] = max(pre[i - 1], arr[i]);

        long long count = 0;

        // even indices (0-based) must be valleys
        for (int i = 0; i < size; i += 2)
        {
            long long limit = LLONG_MAX;

            if (i > 0)
                limit = min(limit, pre[i - 1] - 1);

            if (i + 1 < size)
                limit = min(limit, pre[i + 1] - 1);

            if (arr[i] > limit)
                count += arr[i] - limit;
        }

        cout << count << '\n';
    }
}
