
#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll solve(char ch, string s)
{
	vector<int>pos;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ch)
		pos.push_back(i);
	}

	if(pos.size() <= 1)
	return 0;

	for (int i = 0; i < pos.size(); i++)
	pos[i] -= i;

	int med = pos.size() / 2;
	ll total = 0;

	for (int i = 0; i < pos.size(); i++)
	total += abs(pos[i] - pos[med]);

	return total;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;

	while (t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;

		ll ans = 1e15;
		ans = min(ans, solve('a', s));
		ans = min(ans, solve('b', s));
		cout<<ans<<'\n';
	}
}