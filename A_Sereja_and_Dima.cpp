
#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s;
    cin >> s;

    vector<int> v(s);
    for(int i = 0; i < s; i++)
        cin >> v[i];

    int first = 0, second = 0, it1 = 0, it2 = s - 1;
    bool turn = true; 

    while(it1 <= it2)
    {
        int take;
        if(v[it1] > v[it2]) take = v[it1++];
        else take = v[it2--];

        if(turn) first += take;
        else second += take;

        turn = !turn;
    }

    cout << first << " " << second << '\n';
}