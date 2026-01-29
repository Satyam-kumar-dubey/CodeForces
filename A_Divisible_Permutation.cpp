#include <iostream>
#include<vector>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin>>test;
    while (test--) {

        int size;
        cin>>size;

        vector<int> arr(size);
        vector<bool> used(size+1, false);

        arr[size - 1] = 1;
        used[1] = true;

        for (int i = size - 1; i >= 1; --i) 
        {
            int target = arr[i] % i;
            int taken = -1;

            for (int x = 1; x <= size; ++x) 
            {
                if (!used[x] && (x % i) == target) 
                {
                    taken = x;
                    break;
                }
            }

            arr[i - 1] = taken;
            used[taken] = true;
        }

        for (int i = 0; i < size; ++i)
        {
            cout<<arr[i]<<(i + 1 == size ? '\n' : ' ');
        }
    }
}
