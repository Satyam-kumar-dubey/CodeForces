#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int p0 = (1 << n) - 1;
    cout << p0;

    for (int k = 0; k < n; ++k) {
        int mask = (1 << (n - k - 1)) - 1;
        int num_elements = (1 << k);
        
        for (int hb = 0; hb < num_elements; ++hb) {
            
            int x = (hb << (n - k)) | mask;
            cout << " " << x;
        }
    }
    cout << "\n";
}

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}