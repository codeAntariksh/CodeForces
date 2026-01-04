#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(vector<int> &arr,int l,int r)
{
	int n = arr.size();
	int ub = upper_bound(arr.begin(),arr.end(),r) - arr.begin();
	int lb = lower_bound(arr.begin(),arr.end(),l) - arr.begin();	
	cout<<ub-lb<<" ";
	return;
}

int32_t main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &a:arr)
    	cin>>a;
	sort(arr.begin(),arr.end());
	int t;
	cin>>t;
	while(t--)
	{
		int l,r;
		cin>>l>>r;
		solve(arr,l,r);
	}	
	return 0;
}