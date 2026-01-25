
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
        int days;
        cin>>days;

        vector<long long>skiing(days);
        vector<long long>movie(days);
        vector<long long>boardGame(days);

        vector<pair<long long, long long>>skii,movi,game;

        for(long long i=0; i<days; i++)
        {
            cin>>skiing[i];
            skii.push_back({skiing[i],i});
        }
        for(long long i=0; i<days; i++)
        {
            cin>>movie[i];
            movi.push_back({movie[i],i});
        }
        for(long long i=0; i<days; i++)
        {
            cin>>boardGame[i];
            game.push_back({boardGame[i],i});
        }

        sort(skii.begin(),skii.end(),greater<>());
        sort(movi.begin(),movi.end(),greater<>());
        sort(game.begin(),game.end(),greater<>());
        
        long long ans = LLONG_MIN;
        for(long long i=0; i<3; i++)
        {
            for(long long j=0; j<3; j++)
            {
                for(long long k=0; k<3; k++)
                {
                    if(skii[i].second != movi[j].second && movi[j].second!=game[k].second && skii[i].second!=game[k].second)
                    ans = max(ans, skii[i].first + movi[j].first + game[k].first);   
                }
            }
        }
        cout<<ans<<endl;
    }
}