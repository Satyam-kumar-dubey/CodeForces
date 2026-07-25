#include <iostream>
using namespace std;

long long ans(int a, int b, int c, int d)
{
 if (b > d || (d - b) < (c - a))
 {
 return -1;
 }

 long long y = d - b;
 long long ax = a + y;
 return y + (ax - c);
}

int main()
{
 ios::sync_with_stdio(false);
 cin.tie(nullptr);

 int t;
 cin >> t;

 while (t--)
 {
 int a, b, c, d;
 cin >> a >> b >> c >> d;
 cout << ans(a, b, c, d) << '\n';
 }

 return 0;
}