
#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, n, w;
    cin >> k >> n >> w;

    long long total_cost = k * (long long)(w * (w + 1)) / 2;

    long long borrow = total_cost - n;
    
    if (borrow > 0)
        cout << borrow << '\n';
    else
        cout << 0 << '\n';

    return 0;
}