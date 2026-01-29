
#include<iostream>
#include<string>

using namespace std;

long long remove(long long num)
{
    string s = to_string(num);
    string res = "";
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] != '0')
        res += s[i];
    }
    long long val = stoll(res);
    return val;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long num1,num2;
    cin>>num1>>num2;

    long long sum = num1 + num2;

    long long newNum1 = remove(num1);
    long long newNum2 = remove(num2);
    long long SumAfterZero = remove(sum);

    long long newSum = newNum1 + newNum2;

    cout<<(newSum == SumAfterZero ? "YES" : "NO");
}