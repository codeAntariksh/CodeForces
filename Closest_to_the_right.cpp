#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(vector<int> &arr,int &query)
{
	int n = arr.size();
	int low = 0;
	int high = n-1;
	int ans = n;
	while(low<=high)
	{
		int mid = low + (high-low)/2;
		if(arr[mid]>=query)
		{
			ans = mid;
			high = mid-1;
		}
		else low = mid+1;
	}
	cout<<ans+1<<endl;
	return;
}

int32_t main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int n,k;
	cin>>n>>k;
	vector<int> arr(n),query(k);
	for (auto &a:arr) 
		cin>>a;
	for(int i=0;i<k;i++)
	{
		cin>>query[i];
	}
	for(int i=0;i<k;i++)
	{
		solve(arr,query[i]);
	}
	return 0;
}