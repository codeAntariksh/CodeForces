#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(string s,set<char> &st)
{
	st.insert(s[0]);
	int ans = 0;
	for(int i=1;i<s.size();i++)
	{
		st.insert(s[i]);
		ans+=st.size();
	}
	cout<<ans+1<<endl;
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
		int n;
		cin>>n;
		string s;
		cin>>s;
		if(s.size()==1)
		{
			cout<<1<<endl;
			continue;
		}
		set<char> st;
		solve(s,st);
	}	
	return 0;
}