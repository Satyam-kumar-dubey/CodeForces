
#include<iostream>
#include<algorithm>
using namespace std;

long long noOfBread, noOfSausage, noOfCheese;
long long costOfBread,costOfSausage,costOfCheese;
long long budget;
long long countOfB,countOfS,countOfC;

bool make(long long x)
{
    long long needB = countOfB * x;
    long long needS = countOfS * x;
    long long needC = countOfC * x;

    long long buyB = max(0LL,needB - noOfBread);
    long long buyS = max(0LL,needS - noOfSausage);
    long long buyC = max(0LL,needC - noOfCheese);

    long long cost = (buyB * costOfBread) + (buyS * costOfSausage) + (buyC * costOfCheese);

    return cost <= budget;
}

int main()
{
    string s;
    cin>>s;

    cin>>noOfBread>>noOfSausage>>noOfCheese;

    cin>>costOfBread>>costOfSausage>>costOfCheese;

    cin>>budget;

    countOfB = 0;
    countOfS = 0;
    countOfC = 0;

    for(char c : s)
    {
        if(c == 'B')
        countOfB++;
        else if(c == 'S')
        countOfS++;
        else
        countOfC++;
    };

    long long start = 0, end = (long long)1e13;
    while( start < end )
    {
        long long mid = (start + end + 1 )/2;
        if(make(mid))
        start = mid;
        else
        end = mid-1;
    }
    cout<<start<<endl;
}