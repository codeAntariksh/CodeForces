#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(vector<int> &a,vector<int> &b,int k)
{
	int n = a.size();
	for(int i = 1;i<n;i++)
	{
		a[i]+=a[i-1];
		b[i] = max(b[i],b[i-1]);
	}
	int ans = -1;
	for(int i=0;i<n && i<k;i++)
	{
		ans = max(ans,a[i]+((k-i-1)*b[i]));
	}
	cout<<ans<<endl;
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
		int n,k;
		cin>>n>>k;
		vector<int> a(n);
		vector<int> b(n);
		for (auto &x:a) 
			cin>>x;
		for(auto &x:b)
			cin>>x;
		solve(a,b,k);
	}	
	return 0;
}