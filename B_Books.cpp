
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main ()
{
    int size;
    long long time;
    cin>>size>>time;

    vector<int>book(size);
    for(int i=0; i<size; i++)
    cin>>book[i];

    int start = 0, end = 0, length = 0;
    long long sum = 0;
    while(end < size)
    {
        sum += book[end];
        while(sum > time)
        {
            sum -= book[start];
            start++;
        }
        length = max(length,end-start+1);
        end++;
    }
    cout<<length<<'\n';
}