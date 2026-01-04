#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(string &s)
{
	int n = s.size();
	int zero=0;
	int one=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='0') zero++;
		else one++;
	}
	if(zero==one) cout<<0<<endl;
	else
	{
		int i=0;
		for(i=0;i<n;i++)
		{
			if(s[i]=='0')
				if(one>0)
					one--;
				else break;
			else
				if(zero>0)
					zero--;
				else
					break;
		}
		cout<<n-i<<endl;
	}
}

int32_t main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int t=1;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		solve(s);
	}	
	return 0;
}