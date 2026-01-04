#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

bool possible(int mid,vector<int> &arr)
{
	int n = arr.size();
	int cnt_tangents = 0;
	int remaining = 0;
	for(int i = 0;i<n;i++)
	{
		
	}
}


void solve(vector<int> arr)
{
	int n = arr.size();
	int r = n - 1;
	int l = 0;
	while(l<=r)
	{
		int mid = l + (r-l)/2;
		if(possible(mid,arr))
		{
			low = mid + 1;
			ans = mid;
		}
		else
			high = mid - 1;
	}
	cout<<l<<endl;
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
		vector<int> arr(n);
		for (auto &a:arr) 
			cin>>a;
		solve(arr);
	}	
	return 0;
}