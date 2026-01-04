#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(vector<int> &a,vector<int> &b)
{
	int n = a.size();
	int score = 0;
	for(int i=0;i<n;i++)
	{
		score = max(score-a[i],b[i]-score);
	}
	cout<<score<<endl;
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
		int n;
		cin>>n;
		vector<int> a(n);
		vector<int> b(n);
		for (auto &x:a) 
			cin>>x;
		for (auto &x:b) 
			cin>>x;
		solve(a,b);
	}	
	return 0;
}