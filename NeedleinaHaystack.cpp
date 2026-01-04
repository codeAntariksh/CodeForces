#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(string &s,string &t)
{
	map<char,int> mpp;
	for(auto &x:t)
		mpp[x]++;
	for(auto &x:s)
	{
		auto it=mpp.find(x);
		if(it==mpp.end() || it->second==0)
		{
			cout<<"Impossible"<<endl;
			return;
		}
		mpp[x]--;
	}
	int chr = 0;
	for(auto it=mpp.begin();it!=mpp.end();it++)
	{
		if(chr==s.size())
		{
			for(int i=0;i<it->second;i++)
				cout<<it->first;
			continue;
		}
		if(it->first<s[chr])
		{
			for(int i=0;i<it->second;i++)
				cout<<it->first;
		}
		else
		{
			while(chr<s.size() && s[chr]<=it->first)
			{
				cout<<s[chr];
				chr++;
			}
			for(int i=0;i<it->second;i++)
				cout<<it->first;
		}
	}
	cout<<endl;
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
		string s,t;
		cin>>s;
		cin>>t;
		solve(s,t);
	}	
	return 0;
}