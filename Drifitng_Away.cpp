#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(string &s)
{
	int n = s.size();
	// Initial Checks
	// >< Sequence, ** & >* & *< Conditions
	bool greater = false;
	for(int i=0;i<n-1;i++)
	{
		if((s[i]=='>' && s[i+1]=='*') || (s[i]=='*' && s[i+1]=='<') || (s[i]=='*' && s[i+1]=='*'))
		{
			cout<<-1<<endl;
			return;
		}
		if(s[i]=='>')
			greater = true;
		if(s[i]=='<' && greater==true)
		{
			cout<<-1<<endl;
			return;
		}
	}
	int dist = 1;
	// *>>>> Sequence Check
	for(int i=0;i<n-1;i++)
	{
		if(s[i]=='*')
		{
			int temp = i;
			int run = 1;
			while(i<n)
			{
				if((s[i]=='*' && s[i+1]=='>') || (s[i]=='>' && s[i+1]=='>'))
					{
						run++;
						i++;
					}
				else break;	
			}
			dist = max(dist,run);
			i = temp;
		}
	}
	// <<<<* Sequence Check
	for(int i=0;i<n-1;i++)
	{
		if(s[i]=='<')
		{
			int temp = i;
			int run = 1;
			while(i<n)
			{
				if((s[i]=='<' && s[i+1]=='<') || (s[i]=='<' && s[i+1]=='*'))
					{
						run++;
						i++;
					}
				else break;	
			}
			dist = max(dist,run);
			i = temp;
		}
	}
	cout<<dist<<endl;
	return;
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