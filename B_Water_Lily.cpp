
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double H, L;
    cin>>H>>L;

    double d = (L * L - H * H) / (2 * H);
    cout<<fixed<<setprecision(13)<<d;

}