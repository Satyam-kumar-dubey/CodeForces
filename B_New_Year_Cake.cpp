#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        long long a, b;
        cin >> a >> b;

        int ans = 0;

        long long white1 = 0, dark1 = 0; 
        long long white2 = 0, dark2 = 0; 

        long long size = 1;

        for (int i = 1; i <= 20; i++) {
            
            if (i % 2 == 1)
            white1 += size;
            else
            dark1 += size;


            if (i % 2 == 1)
            dark2 += size;
            else
            white2 += size;

            
            if ((white1 <= a && dark1 <= b) ||
                (white2 <= a && dark2 <= b)) {
                ans = i;
            } else {
                break;
            }

            size *= 2; 
        }

        cout << ans << endl;
    }

    return 0;
}
