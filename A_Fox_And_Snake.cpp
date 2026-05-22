
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<char>> v(n, vector<char>(m, '.'));

    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            for(int j = 0; j < m; j++)
            v[i][j] = '#';
        }
        else
        {
            if((i / 2) % 2 == 0)
            v[i][m - 1] = '#';
            else
            v[i][0] = '#';
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        cout << v[i][j];
        cout << '\n';
    }

}