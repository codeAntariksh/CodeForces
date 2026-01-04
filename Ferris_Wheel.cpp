#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(vector<int> &arr,int &x)
{
	int n = arr.size();
	int min_gondolas = 0;
	sort(arr.begin(),arr.end());
	int l = 0;
	int r = n-1;
	while(l<r)
	{
		if(arr[l]+arr[r]<=x)
		{
			l++;
		}
		r--;
		min_gondolas++;
		if(l==r)
		{
			min_gondolas++;
			break;
		}
	}
	cout<<min_gondolas<<endl;
}

int32_t main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int n,x;
	cin>>n>>x;
	vector<int> arr(n);
	for (auto &a:arr) 
		cin>>a;
	solve(arr,x);	
	return 0;
}