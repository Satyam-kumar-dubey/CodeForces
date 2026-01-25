
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main ()
{
    int test;
    cin>>test;

    while(test--)
    {
        int size;
        cin>>size;
        vector<int>sword(size),strike(size);

        for(int i=0; i<size; i++)
        cin>>sword[i];
        for(int i=0; i<size; i++)
        cin>>strike[i];

        vector<long long>preHealth(size);
        preHealth[0] = strike[0];
        for(int i=1; i<size; i++)
        preHealth[i] = preHealth[i-1] + strike[i];

        sort(sword.begin(),sword.end());
        long long score = 0;
        for(int i=0; i<size; i++)
        {
            int difficulty = sword[i];
            int usableSword = size - i;
            int levelCanCompleted = upper_bound(preHealth.begin(),preHealth.end(),usableSword) - preHealth.begin();
            score = max(score,(long long)difficulty * (long long)levelCanCompleted);

            while(i+1<size && sword[i+1] == difficulty)
            i++;
        }
        cout<<score<<endl;
    }
}